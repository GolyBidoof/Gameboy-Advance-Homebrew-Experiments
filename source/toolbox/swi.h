#ifndef SWI_H
#define SWI_H

#if	defined	( __thumb__ )
#define	swi_call(x)	 __asm("swi\t"#x ::: "r0", "r1", "r2", "r3")
#else
#define	swi_call(x)	 __asm("swi\t"#x"<<16" ::: "r0", "r1", "r2", "r3")
#endif

#endif //SWI_H