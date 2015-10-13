#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <curl/curl.h>
#include <iostream>
#include <cstring>
#include <time.h>

const std::string UP = "0";
const std::string DOWN = "2";
const std::string LEFT = "4";
const std::string RIGHT = "6";

const std::string USER = "admin";
const std::string PASS = "12345";
std::string port = "";
std::string ip = "";

bool joystick;
bool gui;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    joystick = false;
    gui = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_up_button_clicked()
{
    std::string direction = UP;
    std::string sendUrl = "http://" + ip + ":" + port + "/decoder_control.cgi?loginuse="
            + USER +"&loginpas=" + PASS + "&command="+ direction +"&onestep=0" +
            "&14434782369140.2543632062152028&_=1443478236914";
    if (gui) {
        char * cstr = new char [sendUrl.length()+1];
        std::strcpy (cstr, sendUrl.c_str());

        CURL *curl;
        curl = curl_easy_init();
        if (curl) {
            CURLcode res;
            curl_easy_setopt(curl, CURLOPT_URL, cstr);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);

            long myTime = clock();
            while (clock() < myTime+500000)
            {/*waiting*/}

            curl = curl_easy_init();

            sendUrl = "http://" + ip + ":" + port + "/decoder_control.cgi?loginuse="
                    + USER +"&loginpas=" + PASS + "&command=7&onestep=1" +
                    "&14434782369140.2543632062152028&_=1443478236914";

            char * cstr = new char [sendUrl.length()+1];
            std::strcpy (cstr, sendUrl.c_str());

            curl_easy_setopt(curl, CURLOPT_URL, cstr);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
        }
    }
}

void MainWindow::on_right_button_clicked()
{
    std::string direction = RIGHT;
    std::string sendUrl = "http://" + ip + ":" + port + "/decoder_control.cgi?loginuse="
            + USER +"&loginpas=" + PASS + "&command="+ direction +"&onestep=0" +
            "&14434782369140.2543632062152028&_=1443478236914";
    if (gui) {
        char * cstr = new char [sendUrl.length()+1];
        std::strcpy (cstr, sendUrl.c_str());

        CURL *curl;
        curl = curl_easy_init();
        if (curl) {
            CURLcode res;
            curl_easy_setopt(curl, CURLOPT_URL, cstr);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);

            long myTime = clock();
            while (clock() < myTime+500000)
            {/*waiting*/}

            curl = curl_easy_init();

            sendUrl = "http://" + ip + ":" + port + "/decoder_control.cgi?loginuse="
                    + USER +"&loginpas=" + PASS + "&command=7&onestep=1" +
                    "&14434782369140.2543632062152028&_=1443478236914";

            char * cstr = new char [sendUrl.length()+1];
            std::strcpy (cstr, sendUrl.c_str());

            curl_easy_setopt(curl, CURLOPT_URL, cstr);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
        }
    }
}

void MainWindow::on_left_button_clicked()
{
    std::string direction = LEFT;
    std::string sendUrl = "http://" + ip + ":" + port + "/decoder_control.cgi?loginuse="
            + USER +"&loginpas=" + PASS + "&command="+ direction +"&onestep=0" +
            "&14434782369140.2543632062152028&_=1443478236914";
    if (gui) {
        char * cstr = new char [sendUrl.length()+1];
        std::strcpy (cstr, sendUrl.c_str());

        CURL *curl;
        curl = curl_easy_init();
        if (curl) {
            CURLcode res;
            curl_easy_setopt(curl, CURLOPT_URL, cstr);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);

            long myTime = clock();
            while (clock() < myTime+500000)
            {/*waiting*/}

            curl = curl_easy_init();

            sendUrl = "http://" + ip + ":" + port + "/decoder_control.cgi?loginuse="
                    + USER +"&loginpas=" + PASS + "&command=7&onestep=1" +
                    "&14434782369140.2543632062152028&_=1443478236914";

            char * cstr = new char [sendUrl.length()+1];
            std::strcpy (cstr, sendUrl.c_str());

            curl_easy_setopt(curl, CURLOPT_URL, cstr);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
        }
    }
}

void MainWindow::on_down_button_clicked()
{
    std::string direction = DOWN;
    std::string sendUrl = "http://" + ip + ":" + port + "/decoder_control.cgi?loginuse="
            + USER +"&loginpas=" + PASS + "&command="+ direction +"&onestep=0" +
            "&14434782369140.2543632062152028&_=1443478236914";
    if (gui) {
        char * cstr = new char [sendUrl.length()+1];
        std::strcpy (cstr, sendUrl.c_str());

        CURL *curl;
        curl = curl_easy_init();
        if (curl) {
            CURLcode res;
            curl_easy_setopt(curl, CURLOPT_URL, cstr);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);

            long myTime = clock();
            while (clock() < myTime+500000)
            {/*waiting*/}

            curl = curl_easy_init();

            sendUrl = "http://" + ip + ":" + port + "/decoder_control.cgi?loginuse="
                    + USER +"&loginpas=" + PASS + "&command=7&onestep=1" +
                    "&14434782369140.2543632062152028&_=1443478236914";

            char * cstr = new char [sendUrl.length()+1];
            std::strcpy (cstr, sendUrl.c_str());

            curl_easy_setopt(curl, CURLOPT_URL, cstr);
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
        }
    }
}

void MainWindow::on_joystick_radio_clicked()
{
    joystick = true;
    gui = false;
}

void MainWindow::on_gui_radio_clicked()
{
    gui = true;
    joystick = false;
}

void MainWindow::on_ip_address_edit_textChanged()
{
   ip = this->ui->ip_address_edit->text().toStdString();
   std::cout << "IP: " << ip << std::endl;
}

void MainWindow::on_port_edit_textChanged(const QString &arg1)
{
    port = this->ui->port_edit->text().toStdString();
    std::cout << "Port: " << port << std::endl;
}
