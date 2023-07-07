#include "mbed.h"

Serial pc(USBTX, USBRX);
// HC12 hc(p2,p3); //HC12.h 헤더 파일 필요

int main()
{
    //통신 속도 설정
    pc.baud(9600); //
    // hc.baud(); //HC12.h 헤더 파일 필요

    while (true) { 
        if (pc.readable()) {
            pc.putc(pc.getc());
        }

        if (pc.writable()) {
            pc.putc();
        }
                //hc.read();

    }
}
