static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 🐳 ", 	"docker ps -q | wc -l", 					5,	0},
	{" 🐏 ", 	"free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,	0},
	{" 🌈 ",	"curl -s 'wttr.in/96135?format=%t/%f+💧+%h+%w'",  		3600,   0},
	{" ⌚ ",	"date '+%A %e %B - %R'",					60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
