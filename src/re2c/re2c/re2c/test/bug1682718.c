/* Generated by re2c */
#line 1 "bug1682718.re"
char *scan(char *p)
{

#line 7 "bug1682718.c"
	{
		unsigned char yych;
		yych = (unsigned char)*p;
		switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':	goto yy4;
		default:	goto yy2;
		}
yy2:
		++p;
#line 10 "bug1682718.re"
		{return (char*)0;}
#line 28 "bug1682718.c"
yy4:
		yych = (unsigned char)*++p;
		switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':	goto yy4;
		default:	goto yy6;
		}
yy6:
#line 9 "bug1682718.re"
		{return p;}
#line 47 "bug1682718.c"
	}
#line 11 "bug1682718.re"

}
