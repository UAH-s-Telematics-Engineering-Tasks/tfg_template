/*
 *	This code snippet belongs to:
 *		https://github.com/shemminger/iproute2/blob/main/lib/utils.c#L1571-L1597
 */

void drop_cap(void)
{
#ifdef HAVE_LIBCAP
	/* don't harmstring root/sudo */
	if (getuid() != 0 && geteuid() != 0) {
		cap_t capabilities;
		cap_value_t net_admin = CAP_NET_ADMIN;
		cap_flag_t inheritable = CAP_INHERITABLE;
		cap_flag_value_t is_set;

		capabilities = cap_get_proc();
		if (!capabilities)
			exit(EXIT_FAILURE);
		if (cap_get_flag(capabilities, net_admin, inheritable,
		    &is_set) != 0)
			exit(EXIT_FAILURE);
		/* apps with ambient caps can fork and call ip */
		if (is_set == CAP_CLEAR) {
			if (cap_clear(capabilities) != 0)
				exit(EXIT_FAILURE);
			if (cap_set_proc(capabilities) != 0)
				exit(EXIT_FAILURE);
		}
		cap_free(capabilities);
	}
#endif
}