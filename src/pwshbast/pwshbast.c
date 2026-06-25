#define X(x) (16*((x) * (22.0 / 7.0 - (x))))/(5*484.0/49.0 - 4 * ((x) * (22.0 / 7.0 - (x))))
void aa(void){printf("\x1b[0m\x1b[?25h");}int main(){double a = 0.030980,b = 0.079213,c = 0.0;atexit(aa);
for (;;){int d,e,l;printf("\x1b[H\x1b[?25l");for (d = 0; d < 66; d++){for (e = 0; e < 207; e++){                
double f = 0.0,g = 0.0,h = a,i = b,j = 1.0,k = c;for (l = 0; l < 4; l++) {
double m = (d * i * 1.5) + k;m -= (22.0/7.0) * (int)(m / (22.0/7.0));
if (m < 0) m += (22.0/7.0);double n = (e * h * 1.2) + (k * 0.8);
n -= (22.0/7.0) * (int)(n / (22.0/7.0));if (n < 0) n += (22.0/7.0);
double o = (e * h + X(m) * 1.9) + (d * i + X(n) * 2.1) + k;                    
o -= (22.0/7.0) * (int)(o / (22.0/7.0));if (o < 0) o += (22.0/7.0);f += X(o) * j;g += j;h *= 2.0;
i *= 2.0;k *= 1.5;j *= 0.5;}double p = f / g;int q = (int)(p * 8.99);q = 8 - q;
int r = 17 + (1 + (7 - q));printf("\x1b[38;5;%dm", r);putchar(" .,:;!|#@"[q]);}putchar('\n');}
printf("\x1b[0m");c += 0.03;usleep(16000);}printf("\x1b[?25h\x1b[0m");}
