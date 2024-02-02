void mx_printchar(char c);

void space(int s){
	for(int j = 0; j < s; j++){
		mx_printchar(' ');
	}
}
void mx_pyramid(int n){
    if (n <= 1 || n % 2 != 0) {
        return;
    }
    int S = n-1, b = n / 2, d = 2 * n - 3, temp1 = 1, temp2 = 1;
    space(S);
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');
    for(int i = 1; i < S; i++){
	    space(S-i);
	    mx_printchar('/');
	    if (i < b){
		space(temp1);
		mx_printchar('\\');
		space(temp2);
		mx_printchar('\\');
                temp1+=2;
		temp2++;
	    }
	    else {
		space(temp1);
                mx_printchar('\\');
		temp1+=2;
		temp2--;
		space(temp2);
                mx_printchar('|');
	    }
	    mx_printchar('\n');
    }
    mx_printchar('/');
    for(int i = 0; i < d; i++){
	    mx_printchar('_');
    }
    mx_printchar('\\');
    mx_printchar('|');
    mx_printchar('\n');
}



