 1. What is process control block?
  > Process Control Block is a data structure that contains information of the process related to it. The process control block is also known as a task control block, entry of the process table, etc. It is very important for process management as the data structuring for processes is done in terms of the PCB. It also defines the current state of the operating system.

 2. What is an OS? Need of an operating system. Also discuss major functions of OS.
 > An Operating System (OS) is an interface between a computer user and computer hardware. An operating system is a software which performs all the basic tasks like file management, memory management, process management, handling input and output, and controlling peripheral devices such as disk drives and printers.
 Some popular Operating Systems include Linux Operating System, Windows Operating System, VMS, OS/400, AIX, z/OS, etc.
 >
 > * Need for Operating System
    >   1. Interface between the user and the computer - An OS provides a very easy way to interact with the computer. It provides different features and GUI so that we can easily work on a computer. We have to interact just by clicking the mouse or through the keyboard. Thus, we can say that an OS makes working very easy and efficient.
    >
    >   2. Booting - Booting is basically the process of starting the computer. When the CPU is first switched ON it has nothing inside the memory. So, to start the computer, we load the operating system into the main memory. Therefore, loading the OS to the main memory to start the computer is booting. Hence, the Os helps to start the computer when the power is switched ON.
    >   3. Managing the input/output devices - The OS helps to operate the different input/output devices. The OS decides which program or process can use which device. Moreover, it decides the time for usage. In addition to this, it controls the allocation and deallocation of devices.
    >   4. Multitasking - The OS helps to run more than one application at a time on the computer. It plays an important role while multitasking. Since it manages memory and other devices during multitasking. Therefore, it provides smooth multitasking on the system.
    >   5. Platform for other application software - Users require different application programs to perform specific tasks on the system. The OS manages and controls these applications so that they can work efficiently. In other words, it acts as an interface between the user and the applications.
    >   6. Manages the memory - It helps in managing the main memory of the computer. Moreover, It allocates and deallocates memory to all the applications/tasks.
	>   7. Manages the system files - It helps to manage files on the system. As we know, all the data on the system is in the form of files. It makes interaction with the files easy.
    >   8. Provides Security - It keeps the system and applications safe through authorization. Thus, the OS provides security to the system.
    >   9. Acts as an Interface - It is an interface between computer hardware and software. Moreover, it is an interface between the user and the computer.
 > * Functions of Operating System :
 >
    >   1. Security ??? For security, modern operating systems employ a firewall. A firewall is a type of security system that monitors all computer activity and blocks it if it detects a threat.
    >
    >   2. Job Accounting ??? As the operating system keeps track of all the functions of a computer system. Hence, it makes a record of all the activities taking place on the system. It has an account of all the information about the memory, resources, errors, etc. Therefore, this information can be used as and when required.
    >   3. Control over system performance ??? The operating system will collect consumption statistics for various resources and monitor performance indicators such as reaction time, which is the time between requesting a service and receiving a response from the system.
    >   4. Error detecting aids ??? While a computer system is running, a variety of errors might occur. Error detection guarantees that data is delivered reliably across susceptible networks. The operating system continuously monitors the system to locate or recognize problems and protects the system from them.
    >   5. Coordination between other software and users ??? The operating system (OS) allows hardware components to be coordinated and directs and allocates assemblers, interpreters, compilers, and other software to different users of the computer system.
    >   6. Booting process ??? The process of starting or restarting a computer is referred to as Booting. Cold booting occurs when a computer is totally turned off and then turned back on. Warm booting occurs when the computer is restarted. The operating system (OS) is in charge of booting the computer.

 3. Explain types of operating system.
	> An Operating System performs all the basic tasks like managing files, processes, and memory. Thus operating system acts as the manager of all the resources, i.e. resource manager. Thus, the operating system becomes an interface between user and machine. 
    >
    > * Types of Operating Systems: Some widely used operating systems are as follows- 

1. Batch Operating System - This type of operating system does not interact with the computer directly. There is an operator which takes similar jobs having the same requirement and group them into batches. It is the responsibility of the operator to sort jobs with similar needs. 

2. Time-Sharing Operating Systems - Each task is given some time to execute so that all the tasks work smoothly. Each user gets the time of CPU as they use a single system. These systems are also known as Multitasking Systems. The task can be from a single user or different users also. The time that each task gets to execute is called quantum. After this time interval is over OS switches over to the next task. 

3. Distributed Operating System - These types of the operating system is a recent advancement in the world of computer technology and are being widely accepted all over the world and, that too, with a great pace. Various autonomous interconnected computers communicate with each other using a shared communication network. Independent systems possess their own memory unit and CPU. These are referred to as loosely coupled systems or distributed systems. These system???s processors differ in size and function. The major benefit of working with these types of the operating system is that it is always possible that one user can access the files or software which are not actually present on his system but some other system connected within this network i.e., remote access is enabled within the devices connected in that network. 

4. Network Operating System - These systems run on a server and provide the capability to manage data, users, groups, security, applications, and other networking functions. These types of operating systems allow shared access of files, printers, security, applications, and other networking functions over a small private network. One more important aspect of Network Operating Systems is that all the users are well aware of the underlying configuration, of all other users within the network, their individual connections, etc. and that???s why these computers are popularly known as tightly coupled systems. 

5. Real-Time Operating System - These types of OSs serve real-time systems. The time interval required to process and respond to inputs is very small. This time interval is called response time. 

Real-time systems are used when there are time requirements that are very strict like missile systems, air traffic control systems, robots, etc. 

Two types of Real-Time Operating System which are as follows: 

Hard Real-Time Systems: 
These OSs are meant for applications where time constraints are very strict and even the shortest possible delay is not acceptable. These systems are built for saving life like automatic parachutes or airbags which are required to be readily available in case of any accident. Virtual memory is rarely found in these systems.
Soft Real-Time Systems: 
These OSs are for applications where for time-constraint is less strict.

* Discuss process state diagram.
A process is a program in execution and it is more than a program code called as text section and this concept works under all the operating system because all the task perform by the operating system needs a process to perform the task

The process executes when it changes the state. The state of a process is defined by the current activity of the process.

Each process may be in any one of the following states -

New - The process is being created.

Running - In this state the instructions are being executed.

Waiting - The process is in waiting state until an event occurs like I/O operation completion or receiving a signal.

Ready - The process is waiting to be assigned to a processor.

Terminated - the process has finished execution.

It is important to know that only one process can be running on any processor at any instant. Many processes may be ready and waiting.

Now let us see the state diagram of these process states -
draw daigram https://www.tutorialspoint.com/assets/questions/media/60253/process%20states.jpg
