शामिल <stdio.h>
संख्या main(){
  संख्या a=0,b=0,c=1,i,n;
  लो ("%d",&n);
  छापो ("%d",c);
  लिये (i=0;i<n;i++){
    a=b;
    b=c;
    c=a+b;
    छापो (",%d",c);
  }
  return 0;
}
