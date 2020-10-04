CC=gcc
#CFLAGS=-I.

dual_pod_shock_POC: dual_pod_shock_POC.c crc32.c

default:
	$(CC) -o dual_pod_shock_POC dual_pod_shock_POC.c crc32.c

