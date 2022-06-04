void printsubsethelper(int input[], int si, int ei, int output[], int m){
    if(si > ei)
    {
        for (int i = 0; i < m; i++)
            cout << output[i] << " ";
        cout << endl;
        return;
    }
    int val = input[si];
    int *newout = new int[m + 1];
    for(int i = 0; i < m; i++)
        newout[i] = output[i];
    newout[m] = val;
    printsubsethelper(input, si + 1, ei, output, m);    
    printsubsethelper(input, si + 1, ei, newout, m + 1);
    return;
}

void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    int *output = new int[0];
    int m = 0;
    return printsubsethelper(input, 0, size - 1 , output, m);
}
