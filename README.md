# nmacapi
nmacapi for netmagic

compile：  gcc test.c -o test -lnmac -lpcap -lnet
#notice -lnmac must be ahead of -lpcap, -lnet
