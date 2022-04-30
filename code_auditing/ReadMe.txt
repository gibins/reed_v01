Read Me

Environment Setup for Memory corruption

In order to solve that problem you will also have to disable ASLR otherwise the address of function() will be unpredictable.

Disable ASLR:

sudo bash -c 'echo 0 > /proc/sys/kernel/randomize_va_space'

Disable canaries:

gcc overflow.c -o overflow -fno-stack-protector

After canaries and ASLR are disabled it should be a straight forward attack like the ones described in Smashing the Stack for Fun and Profit

Here is a list of security features used in ubuntu: https://wiki.ubuntu.com/Security/Features You don't have to worry about NX bits, the address of function() will always be in a executable region of memory because it is within the TEXT memory segment. NX bits only come into play if you are trying to execute shellcode on the stack or heap, which is not required for this assignment.

Now go and clobber that EIP!
