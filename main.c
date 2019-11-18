#include <LPC21xx.h>

char rx;

void txbyte(char rx);

void txbyte1(int rx1);

char rxbyte(void);

int main() {
    char z[] = {'W', 'r', 'o', 'n', 'g', ' ', 'P', 'i', 'n'};
    char a[] = {'W', 'E', 'L', 'C', 'O', 'M', 'E', ' ', 'T', 'O', ' ', 'A', 'T', 'M', ' ', 'M', 'A', 'C', 'H', 'I', 'N',
                'E'};
    char b[] = {'S', 'w', 'i', 'p', 'e', ' ', 'T', 'h', 'e', ' ', 'C', 'a', 'r', 'd'};
    char c[] = {'E', 'n', 't', 'e', 'r', ' ', 'Y', 'o', 'u', 'r', ' ', 'P', 'i', 'n'};
    char d[] = {'C', 'h', 'o', 'o', 's', 'e', ' ', 'Y', 'o', 'u', 'r', ' ', 'O', 'p', 't', 'i', 'o', 'n'};
    char e[] = {'1', '.', ' ', 'C', 'a', 's', 'h', ' ', 'W', 'i', 't', 'h', 'd', 'r', 'a', 'w', 'a', 'l'};
    char f[] = {'2', '.', ' ', 'B', 'a', 'l', 'a', 'n', 'c', 'e', ' ', 'I', 'n', 'q', 'u', 'i', 'r', 'y'};

    char g[] = {'C', 'h', 'o', 'o', 's', 'e', ' ', 'A', 'm', 'o', 'u', 'n', 't'};
    char h[] = {'1', '.', '5', '0', '0'};
    char k[] = {'2', '.', '1', '0', '0', '0'};
    char l[] = {'3', '.', '2', '0', '0', '0'};

    char o[] = {"Your Original Balance Is :- "};
    char p1[] = {"Please Collect Your Cash..."};
    char pqr[] = {"Wrong choice.."};

    int a1, x, y, x1;
    int a11, x2, y1, x11;
    int a111, x3, y11, x111;

    char qx[10];
    char qx1[10];
    char qx2[10];
    char main[10];
    char main2[] = {'5', '0', '0', '0'};
    char main1[10];

    int n = 5000;
    int c1 = 500;
    int d1 = 1000;
    int e1 = 2000;

    char rx[10];
    char px[10];
    char sx;
    char cx;
    int i, j, k1;
    int i1 = 4;

    int p = 0X33;
    int q = 0X30;
    int r = 0X31;

    int s = 0X31;
    int t = 0X30;
    int u = 0X32;

    PINSEL0 = 0X05;
    U0LCR = 0X9E;
    U0DLL = 0X18;
    U0DLM = 0X00;
    U0LCR = 0X1E;

    for (i = 0; i < 23; i++) {
        txbyte(a[i]);
    }

    txbyte(0XA);

    for (i = 0; i < 15; i++) {
        txbyte(b[i]);
    }


    txbyte(0XA);

    for (i = 0; i < 3; i++) {
        rx[i] = rxbyte();
        txbyte(rx[i]);
    }


    txbyte(0XA);

    if (rx[0] == p & rx[1] == q && rx[2] == r) {

        for (i = 0; i < 15; i++) {
            txbyte(c[i]);
        }

        txbyte(0XA);

        for (i = 0; i < 3; i++) {
            px[i] = rxbyte();
            txbyte(px[i]);
        }

        txbyte(0XA);

        if (px[0] == s && px[1] == t && px[2] == u) {

            for (i = 0; i < 19; i++) {
                txbyte(d[i]);
            }

            txbyte(0XA);

            for (i = 0; i < 19; i++) {
                txbyte(e[i]);
            }

            txbyte(0XA);

            for (i = 0; i < 20; i++) {
                txbyte(f[i]);
            }

            txbyte(0XA);
            sx = rxbyte();

            switch (sx) {
                case 0X31:
                    txbyte(0XA);
                    for (j = 0; j < 13; j++) {
                        txbyte(g[j]);
                    }
                    txbyte(0XA);


                    for (j = 0; j < 7; j++) {
                        txbyte(h[j]);
                    }
                    txbyte(0XA);
                    for (j = 0; j < 8; j++) {
                        txbyte(k[j]);
                    }
                    txbyte(0XA);
                    for (j = 0; j < 8; j++) {
                        txbyte(l[j]);
                    }
                    txbyte(0XA);
                    txbyte(0XA);


                    cx = rxbyte();

                    switch (cx) {
                        case 0X31:
                            for (k1 = 0; k1 < 28; k1++) {
                                txbyte(p1[k1]);
                            }
                            txbyte(0XA);


                            txbyte(0XA);

                            a1 = n - c1;
                            x = a1 % 10;
                            qx[i1] = x + '0';
                            i1--;
                            x = a1 / 10;
                            a1 = x;
                            y = a1 % 10;
                            qx[i1] = y + '0';
                            i1--;
                            y = a1 / 10;
                            a1 = y;
                            x1 = a1 % 10;
                            qx[i1] = x1 + '0';
                            i1--;
                            x1 = a1 / 10;
                            a1 = x1;
                            qx[i1] = a1 + '0';

                            for (k1 = 0; k1 < 5; k1++) {
                                main1[k1] = qx[k1];
                            }

                            for (k1 = 0; k1 < 5; k1++) {
                                txbyte(main1[k1]);
                            }

                            break;


                        case 0X32:
                            for (k1 = 0; k1 < 28; k1++) {
                                txbyte(p1[k1]);
                            }
                            txbyte(0XA);

                            a11 = n - d1;
                            x2 = a11 % 10;
                            qx1[i1] = x2 + '0';
                            i1--;
                            x2 = a11 / 10;
                            a11 = x2;
                            y1 = a11 % 10;
                            qx1[i1] = y1 + '0';
                            i1--;
                            y1 = a11 / 10;
                            a11 = y1;
                            x11 = a11 % 10;
                            qx1[i1] = x11 + '0';
                            i1--;
                            x11 = a11 / 10;
                            a11 = x11;
                            qx1[i1] = a11 + '0';

                            for (k1 = 0; k1 < 5; k1++) {
                                main1[k1] = qx1[k1];
                            }
                            for (k1 = 0; k1 < 5; k1++) {
                                txbyte(main1[k1]);
                            }


                            txbyte(0XA);
                            break;


                        case 0X33:
                            for (k1 = 0; k1 < 28; k1++) {
                                txbyte(p1[k1]);
                            }
                            txbyte(0XA);


                            a111 = n - e1;
                            x3 = a111 % 10;
                            qx2[i1] = x3 + '0';
                            i1--;
                            x3 = a111 / 10;
                            a111 = x3;
                            y11 = a111 % 10;
                            qx2[i1] = y11 + '0';
                            i1--;
                            y11 = a111 / 10;
                            a111 = y11;
                            x111 = a111 % 10;
                            qx2[i1] = x111 + '0';
                            i1--;
                            x111 = a111 / 10;
                            a111 = x111;
                            qx2[i1] = a111 + '0';

                            for (k1 = 0; k1 < 5; k1++) {
                                main1[k1] = qx2[k1];
                            }
                            for (k1 = 0; k1 < 5; k1++) {
                                txbyte(main1[k1]);
                            }
                            txbyte(0XA);
                            break;


                        default:
                            for (i = 0; i < 15; i++) {
                                txbyte(pqr[i]);

                            }
                            txbyte(0XA);


                    }

                    break;

                case 0X32:
                    txbyte(0XA);
                    for (j = 0; j < 30; j++) {
                        txbyte(o[j]);
                    }
                    for (j = 0; j < 5; j++) {
                        txbyte(main2[j]);
                    }

                    txbyte(0XA);

                    break;


                default:
                    for (i = 0; i < 15; i++) {
                        txbyte(pqr[i]);
                    }
                    txbyte(0XA);

            }
        }
    } else {
        for (i = 0; i < 10; i++) {
            txbyte(z[i]);
        }
        txbyte(0XA);
    }
}


char rxbyte(void) {
    while (!(U0LSR & 0x01));
    {
        rx = U0RBR;
        return (rx);
    }
}


void txbyte(char rx) {
    while (!(U0LSR & 0X20));
    U0THR = rx;
}

void txbyte1(int rx1) {
    while (!(U0LSR & 0X20));
    U0THR = rx1;
}