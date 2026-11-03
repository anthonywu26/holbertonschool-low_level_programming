#include "main.h"

/**
 * jack_bauer - prints every minute of a 24 hour day
 */
void jack_bauer(void)
{
	int h_l, h_r, m_l, m_r;

	for (h_l = 0; h_l <= 2; h_l++)
	{
		for (h_r = 0; h_r <= 9 && h_l * 10 + h_r < 24; h_r++)
		{
			for (m_l = 0; m_l <= 5; m_l++)
			{
				for (m_r = 0; m_r <= 9; m_r++)
				{
					_putchar((char) h_l + '0');
					_putchar((char) h_r + '0');
					_putchar(':');
					_putchar((char) m_l + '0');
					_putchar((char) m_r + '0');
					_putchar('\n');
				}
			}
		}
	}
}
