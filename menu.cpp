#include <iostream>

using namespace std;

int main()
{
    int numero = 0;

    while (numero != 3)
    {
        cout<<"Menu"<<endl;
        cout<<"Digite (1) para instalar Bspwm (2) Instalar polybar (3) para sair"<<endl;
        cin>> numero;
        switch (numero)
        {
        case 1:
            system("sudo apt install xorg bspwm compton nitrogen vim build-essential curl rofi rxvt-unicode pulseaudio");
            system("git clone https://github.com/vibewill/fonts");
            system("cp -r fonts/config  .config");
            system("cp fonts/Xdefaults  .Xdefaults");
            system("echo 'bspwm' >> .xinitrc");
            system("mkdir .local");
            system("mkdir .local/share");
            system("cp -r fonts/fonts .local/share");
            system("fc-cache -fv");
            

            
            break;
        case 2:
            system("sudo apt install cmake cmake-data libcairo2-dev libxcb1-dev libxcb-ewmh-dev libxcb-icccm4-dev libxcb-image0-dev libxcb-randr0-dev libxcb-util0-dev libxcb-xkb-dev pkg-config python-xcbgen xcb-proto libxcb-xrm-dev i3-wm libasound2-dev libmpdclient-dev libiw-dev libcurl4-openssl-dev libpulse-dev libxcb-composite0-dev");
            system("git clone https://github.com/jaagr/polybar.git");
            system("cd polybar && ./build.sh");
            break;
        default:
            break;
        }
        

    }
    




    
    return 0;
}
