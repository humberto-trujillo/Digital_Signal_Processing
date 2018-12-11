#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define SIG_LENGTH 320
#define IMP_RSP_LENGTH 29

extern double InputSignal_f32_1kHz_15kHz[SIG_LENGTH];
extern double Impulse_response[IMP_RSP_LENGTH];

int main()
{
    FILE *input_signal_fptr, *imp_rsp_fptr;

    input_signal_fptr = fopen("input_signal.dat", "w");
    imp_rsp_fptr = fopen("impulse_response.dat", "w");


    for(int i = 0; i < SIG_LENGTH; i++)
    {
        fprintf(input_signal_fptr, "\n%f", InputSignal_f32_1kHz_15kHz[i]);
    }

    fclose(input_signal_fptr);

    for(int i = 0; i < IMP_RSP_LENGTH; i++)
    {
        fprintf(imp_rsp_fptr, "\n%f", Impulse_response[i]);
    }
    fclose(imp_rsp_fptr);


    return 0;
}