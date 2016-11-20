#include <cstdio>
int T;
unsigned long long N;
main(){
 scanf("%d", &T);
  for( int i=1; i<=T; i++ ){
 scanf("%d", &N);
 ( N % 495 != 0 )? printf( "NO\n" ) : printf("YES\n");
}
}