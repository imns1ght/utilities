/*
 * Stimulates the required time for download/upload of data.
 */

#include <stdio.h>

void downloadTime(int hrs, int min, int sec, int size, float downSpeed);
void uploadTime(int hrs, int min, int sec, int size, float upSpeed);

int main()
{
	int hrs, min, sec, size;
	float downSpeed, upSpeed;

	printf("Download speed (Mbps): ");
	scanf("%f", &downSpeed);
	printf("Upload speed (Mbps): ");
	scanf("%f", &upSpeed);
	printf("File size (MB): ");
	scanf("%d", &size);

	printf("\n");
	downloadTime(hrs, min, sec, size, downSpeed);
	uploadTime(hrs, min, sec, size, upSpeed);

	return 0;
}

void downloadTime(int hrs, int min, int sec, int size, float downSpeed)
{
	downSpeed = downSpeed / 8;
	sec = (size / downSpeed);
	min = (sec / 60) % 60;
	hrs = sec / 3600;

	if (hrs > 0) {
		printf("Download time:\t~%dh%dmin\n", hrs, min);
	} else if (min > 0) {
		printf("Download time:\t~%dmin\n", min);
	} else {
		printf("Download time:\t~%dsec\n", sec);
	}
}

void uploadTime(int hrs, int min, int sec, int size, float upSpeed)
{
	upSpeed = upSpeed / 8;
	sec = (size / upSpeed);
	min = (sec / 60) % 60;
	hrs = sec / 3600;

	if (hrs > 0) {
		printf("Upload time:\t~%dh%dmin\n", hrs, min);
	} else if (min > 0) {
		printf("Upload time:\t~%dmin\n", min);
	} else {
		printf("Upload time:\t~%dsec\n", sec);
	}
}
