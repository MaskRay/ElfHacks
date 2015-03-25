// NX bit also applies to other memory regions such as .data though there is no execution permission in the ELF
char data[1] = {0xc3}; // ret instruction in .data
int main() { ((void(*)())data)(); }
