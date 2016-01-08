#include "mainwindow.h"
#include "ui_mainwindow.h"

bool GoodConnection = true;
bool DecailsLimit = false;
int Decailslimit_int = 49;
bool Sprays = true;
bool Shadows = true;
bool FacialFeatures = true;
bool Ragdolls = true;
bool Gibs = true;
////////////////////



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setTextEdit();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString intToStr(int n)
{
     QString tmp;
     if(n < 0) {
      tmp = "-";
      n = -n;
     }
     if(n > 9)
      tmp += intToStr(n / 10);
     tmp += n % 10 + 48;
     return tmp;
}

void MainWindow::AppendText(QString text){
    ui->textEdit->append(text);
}

void MainWindow::setTextEdit(){
    ui->textEdit->clear();
    if(GoodConnection){
        AppendText("cl_cmdrate 66\ncl_interp 0\ncl_interp_ratio 1\ncl_lagcompensation 1\ncl_pred_optimize 2\ncl_smooth 0\ncl_smoothtime 0.01\ncl_updaterate 66\nrate 60000");
    }
    if(!GoodConnection){
        AppendText("cl_cmdrate 40\ncl_interp 0\ncl_interp_ratio 2\ncl_lagcompensation 1\ncl_pred_optimize 2\ncl_smooth 0\ncl_smoothtime 0.01\ncl_updaterate 40\nrate 35000");
    }
    if(DecailsLimit){
        QString cache = "r_decals ";
        cache += intToStr(Decailslimit_int);
        AppendText(cache);
    }
    if(!DecailsLimit)
        AppendText("r_decals 1000");
    if(Sprays){
        AppendText("cl_playerspraydisable 0\nr_spray_lifetime 2\n");
    }
    if(!Sprays){
        AppendText("cl_playerspraydisable 1\nr_spray_lifetime 0\n");
    }
    if(Shadows){
        AppendText("mat_shadowstate 1\nr_shadowmaxrendered 11\nr_shadowrendertotexture 1\nr_shadows 1\n");
    }
    if(!Shadows){
        AppendText("mat_shadowstate 0\nr_shadowmaxrendered 0\nr_shadowrendertotexture 0\nr_shadows 0\n");
    }
    if(FacialFeatures){
        AppendText("r_eyes 1\nr_flex 1\nr_lod 1\nr_rootlod 1\nr_teeth 1\n");
    }
    if(!FacialFeatures){
        AppendText("r_eyes 0\nr_flex 0\nr_lod 2\nr_rootlod 2\nr_teeth 0\n");
    }
    if(Ragdolls){
        AppendText("cl_ragdoll_fade_time 15\ncl_ragdoll_forcefade 0\ncl_ragdoll_physics_enable 1\ng_ragdoll_fadespeed 600\ng_ragdoll_lvfadespeed 100\nragdoll_sleepaftertime 5.0\n");
    }
    if(!Ragdolls){
        AppendText("cl_ragdoll_fade_time 0\ncl_ragdoll_forcefade 1\ncl_ragdoll_physics_enable 0\ng_ragdoll_fadespeed 0\ng_ragdoll_lvfadespeed 0\nragdoll_sleepaftertime 0\n");
    }
    if(Gibs){
        AppendText("cl_phys_props_enable 1\ncl_phys_props_max 128\nprops_break_max_pieces -1\nr_propsmaxdist 1000\nviolence_agibs 1\nviolence_hgibs 1\n");
    }
    if(!Gibs){
        AppendText("cl_phys_props_enable 0\ncl_phys_props_max 0\nprops_break_max_pieces 0\nr_propsmaxdist 1\nviolence_agibs 0\nviolence_hgibs 0\n");
    }
    AppendText("echo \"==============================\"");
    AppendText("echo \"======= Optymalized by orzel1244 =======\"");
    AppendText("echo \"==============================\"\n");
}

void MainWindow::Enabled(QString typ){
    setTextEdit();
    if(typ == "Connection"){
        ui->BadConnection_->setEnabled(true);
        ui->GoodConnection_->setEnabled(true);
    }
}

void MainWindow::on_GoodConnection__clicked(bool checked){
    GoodConnection = checked;
    setTextEdit();
    if(checked){
        ui->BadConnection_->setChecked(false);
        ui->BadConnection_->setEnabled(false);
    }
    else{
        Enabled("Connection");
    }
}


void MainWindow::on_BadConnection__clicked(bool checked){
    setTextEdit();
    if(checked){
        ui->GoodConnection_->setChecked(false);
        ui->GoodConnection_->setEnabled(false);
    }
    else{
        Enabled("Connection");
    }
}



void MainWindow::on_checkBox_6_clicked(bool checked){ // decails limit checker
    DecailsLimit = checked;
    setTextEdit();
    if(checked)
        ui->spinBox->setEnabled(true);
        Decailslimit_int = ui->spinBox->value();
    if(!checked)
        ui->spinBox->setEnabled(false);
        Decailslimit_int = 1000;
}


void MainWindow::on_spinBox_valueChanged(int arg1){
    Decailslimit_int = arg1;
    setTextEdit();
}


void MainWindow::on_checkBox_clicked(bool checked){
    Sprays = checked;
    setTextEdit();
}


void MainWindow::on_checkBox_2_clicked(bool checked){
    Shadows = checked;
    setTextEdit();
}

void MainWindow::on_checkBox_3_clicked(bool checked){
    FacialFeatures = checked;
    setTextEdit();
}


void MainWindow::on_checkBox_4_clicked(bool checked){
    Ragdolls = checked;
    setTextEdit();
}


void MainWindow::on_checkBox_5_clicked(bool checked){
    Gibs = checked;
    setTextEdit();
}
