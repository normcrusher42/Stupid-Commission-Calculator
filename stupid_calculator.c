#include <stdio.h>

void	stupid_calculator(void)
{
	// number of clients I'd finished working with (& their usernames)
	int		lsclients = 7;
	// number of times I paid the withdrawal fee
	int		withdraw = 3;
	// the sum I got withdrawing (floats only)
	float		transfer1 = 238.34;
	float		transfer2 = 369.56;
	float		transfer3 = 1342.54;
	float		transfer4 = 392.88;
	float		transfersum = transfer1 + transfer2 + transfer3 + transfer4;
	float		b4transfer =  70.00 	+ 106.84 	+ 376.93 	+ 113.38;
	// Celery
	int		comm1 = 15 + 7; // tipped me $7 ^-^
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
	int		comm5 = 15; // tipped me $3 ^-^
	float	comm5PP = 14.04;
	// Flame
	int		comm6 = 30 + 10; // tipped me $5 ^-^
	float	comm6PP = 9.26 + 28.38;
	// Bein
	int		comm7 = 80;
	float	comm7PP = 76.18;
	// Total sum of all above commissions
	float	sum = (comm1 + comm2 + comm3 + comm4 + comm5 + comm6 + comm7); // og sum
	float	sumPP = (comm1PP + comm2PP + comm3PP + comm4PP + comm5PP + comm6PP + comm7PP); // paypal sum from fees

	// Start with Client count
	printf("\nTotal num of clients as of now : %d", lsclients);
	// Then OG sum
	printf("\nOG sum :      $%d    + $%d    + $%.2f + $%d    + $%d    + $%d    + $%d    = $%.2f", comm1, comm2, comm3, comm4, comm5, comm6, comm7, sum);
	// Then PP fees sum
	printf("\nPP fees sum : $%.2f + $%.2f + $%.2f + $%.2f + $%.2f + $%.2f + $%.2f = $%.2f", comm1PP, comm2PP, comm3PP, comm4PP, comm5PP, comm6PP, comm7PP, sumPP);
	// Elaborate
	printf("\nI'd gotten $%.2f but paypal's shitty fees reducted it by -$%.2f. So that's a %.2f%% loss :/ (-$%.2f (%.2f%%) if I include withdrawal fees)", sum, (sum - sumPP), (((sum - sumPP) / sum) * 100), ((sum - sumPP) + (withdraw * 3)), (((withdraw * 3) + (sum - sumPP)) / sum) * 100);
	// Conversion rate
	printf("\nbut thanks to conversion rates (1.00 USD = 3.562141 AED including fees) I've only actually withdrawn %.2f + %.2f + %.2f + %.2f = AED%.2f when it should've been AED%.2f.\n so that's a -%.2f loss -.-", transfer1, transfer2, transfer3, transfer4, transfersum, b4transfer * 3.67, (b4transfer * 3.67) - transfersum);

	// Overall summary
	printf("\n\nTo summarize: ");
	printf("\nNum of Clients : %d", lsclients);
	printf("\nOG :     $%.2f\nPP fee : $%.2f ($%.2f precisely)", sum, sumPP, (sumPP - (withdraw * 3)));
	printf("\nOG conversion : AED%.2f\nPP conversion : AED%.2f.", b4transfer * 3.67, transfersum - (b4transfer / 3.67));
	printf("\nCelery, Wwames, & Flame had tipped me ^v^ ($15 total)");
	printf("\nTLDR; fuck Paypal. Got no other options.");

	printf("\n\nOG currency :     AED%.2f", sum * 3.67);
	printf("\nPP fee currency : AED%.2f (%.2f withdrawn)", sumPP * 3.67, transfersum);
	printf("\nAmount Lost :    -AED%.2f\n", (sum - sumPP) * 3.67);

	// if I wanna add a new variable I'll only have to addnDeclare a new variable, add another float specifier and paramater variable. I hope future me doesn't forget :v
}
