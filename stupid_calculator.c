#include <stdio.h>
#include <unistd.h>

void	stupid_calculator(void)
{
	// number of clients I'd finished working with (& their usernames)
	int		lsclients = 7;
	// number of times I payed the withdrawel fee
	int		withdraw = 2;
	// Celery
	int		comm1 = 15 + 7;
	float	comm1PP = 14.04 + 6.39;
	// Wolfguy I forgor
	int		comm2 = 10 + 20;
	float	comm2PP = 9.26 + 18.82;
	// Harry
	float	comm3 = 244.59 + 242.06;
	float	comm3PP = 233.53 + 231.11;
	// Lerfing
	int		comm4 = 150 + 25;
	float	comm4PP = 143.10 + 23.60;
	// Wwames
	int		comm5 = 15;
	float	comm5PP = 14.04;
	// Flame
	int		comm6 = 30 + 10;
	float	comm6PP = 9.26 + 28.38;
	// Bein
	int		comm7 = 80;
	float	comm7PP = 76.18;
	// Total sum of all above commissions
	float	sum = (comm1 + comm2 + comm3 + comm4 + comm5 + comm6 + comm7); // og sum
	float	sumPP = (comm1PP + comm2PP + comm3PP + comm4PP + comm5PP + comm6PP + comm7PP); // paypal sum from fees

	printf("\nTotal num of clients as of now : %d", lsclients);
	// Start with original prices
	printf("\nOG sum : $%d + $%d + $%.2f + $%d + $%d + $%d + $%d = $%.2f", comm1, comm2, comm3, comm4, comm5, comm6, comm7, sum);
	printf("\nPP fees sum : $%.2f + $%.2f + $%.2f + $%.2f + $%.2f + $%.2f + $%.2f = $%.2f", comm1PP, comm2PP, comm3PP, comm4PP, comm5PP, comm6PP, comm7PP, sumPP);
	printf("\nI'd gotten $%.2f but paypal's shitty fees reducted it by -$%.2f\nSo that's a %.2f%% loss :/ (-$%.2f (%.2f%%) if I include withdrawel fees)", sum, (sum - sumPP), ((sumPP / sum) * 100), (withdraw * 3 + (sum - sumPP)), (withdraw * 3 + ((sumPP / sum) * 100)));
	printf("\n")
}