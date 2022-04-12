#include <stdio.h>

int main() {
    int Memory;
    int C_Sound,C_Video,C_Text;
    int S_Sound = 3;
    int S_Video = 1;
    int S_Text = 1;
    printf("Enter the amount of total memory (GB) : ");
    scanf("%d",&Memory);
    Memory =  Memory *1024;  /* GB to MB*/
    printf("\n Enter the number of video files :  ");
    scanf("%d",&C_Video);
    printf("\n Enter the number of Sound files :  ");
    scanf("%d",&C_Sound);
    printf("\n Enter the number of Text files :  ");
    scanf("%d",&C_Text);

    printf("\n Residual memory space (in MB) : %d",Memory - ((C_Video*S_Video)+(C_Sound*S_Sound)+(C_Text*S_Text)));
    printf("\n Residual memory space (in GB) : %d",(Memory - ((C_Video*S_Video)+(C_Sound*S_Sound)+(C_Text*S_Text)))/1024);
    printf("\n Memory space consumed (in MB) : %d ",(C_Video*S_Video)+(C_Sound*S_Sound)+(C_Text*S_Text));
    return 0;
}
