# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# compile C with /usr/bin/cc
C_FLAGS =    -mavx2 -msse4.1 -mssse3  -std=gnu99 -Wall -Wstrict-prototypes -fno-strict-aliasing -rdynamic -funroll-loops -Wno-packed-bitfield-compat -fPIC  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_ARPA_INET_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_STRERROR=1 -DHAVE_SOCKET=1 -DHAVE_MEMSET=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_STDLIB_H=1 -DHAVE_MALLOC=1 -DHAVE_LIBSCTP -D'MAKE_VERSION(a,b,c)=((a)*256+(b)*16+c)'    -mavx2 -msse4.1 -mssse3  -std=gnu99 -Wall -Wstrict-prototypes -fno-strict-aliasing -rdynamic -funroll-loops -Wno-packed-bitfield-compat -fPIC  -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DHAVE_FCNTL_H=1 -DHAVE_ARPA_INET_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_STRERROR=1 -DHAVE_SOCKET=1 -DHAVE_MEMSET=1 -DHAVE_GETTIMEOFDAY=1 -DHAVE_STDLIB_H=1 -DHAVE_MALLOC=1 -DHAVE_LIBSCTP -D'MAKE_VERSION(a,b,c)=((a)*256+(b)*16+c)' -g -DMALLOC_CHECK_=3 -O2 -fPIC  

C_DEFINES = -DASN1_MINIMUM_VERSION=924 -DBASIC_SIMULATOR -DCMAKE_BUILD_TYPE=\"RelWithDebInfo\" -DDRIVER2013 -DENABLE_ITTI -DENABLE_NAS_UE_LOGGING -DENABLE_USE_CPU_EXECUTION_TIME -DENABLE_USE_MME -DENABLE_VCD -DENB_MODE -DEXMIMO_IOT -DF1AP_RELEASE=R15 -DF1AP_VERSION=3873 -DFIRMWARE_VERSION="\"No svn information\"" -DFLPT_VERSION=V2 -DFSPT_VERSION=V2 -DJUMBO_FRAME -DLINUX -DLTE_RRC_VERSION=3696 -DMAX_NUM_CCs=1 -DNAS_BUILT_IN_UE -DNAS_UE -DNB_ANTENNAS_RX=2 -DNB_ANTENNAS_TX=4 -DNETTLE_VERSION_MAJOR=3 -DNETTLE_VERSION_MINOR=2 -DNO_RRM -DNUMBER_OF_UE_MAX_NB_IoT=16 -DNone=1 -DOAI_NW_DRIVER_USE_NETLINK -DOAI_USRP=1 -DOPENAIR2 -DOPENAIR_LTE -DPACKAGE_BUGREPORT=\"openair4g-devel@lists.eurecom.fr\" -DPACKAGE_NAME=\"simulator_ue\" -DPACKAGE_VERSION="\"Branch: dc_dali Abrev. Hash: b8cc46d Date: Mon May 6 19:14:58 2019 +0200\"" -DPHYSIM -DPHY_CONTEXT -DRel14=1 -DS1AP_RELEASE=R14 -DS1AP_VERSION=3664 -DTRACE_RLC_MUTEX -DT_TRACER -DX2AP_RELEASE=R14 -DX2AP_VERSION=3680 -DXFORMS -Doai_bladerfdevif_EXPORTS

C_INCLUDES = -I/home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14 -I/home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14 -I/home/carlos/dualCon/openair3/S1AP -I/home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14 -I/home/carlos/dualCon/openair2/X2AP -I/home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/F1AP_R15.2.1 -I/home/carlos/dualCon/openair2/F1AP -I/home/carlos/dualCon/targets/ARCH/EXMIMO/USERSPACE/LIB -I/home/carlos/dualCon/targets/ARCH/EXMIMO/DEFS -I/home/carlos/dualCon/targets/ARCH/USRP/USERSPACE/LIB -I/home/carlos/dualCon/targets/ARCH/BLADERF/USERSPACE/LIB -I/home/carlos/dualCon/targets/ARCH/LMSSDR/USERSPACE/LIB -I/home/carlos/dualCon/targets/ARCH/ETHERNET/USERSPACE/LIB -I/home/carlos/dualCon/targets/ARCH/IRIS/USERSPACE/LIB -I/home/carlos/dualCon/targets/ARCH/mobipass -I/home/carlos/dualCon/targets/ARCH/COMMON -I/home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles -I/home/carlos/dualCon/openair2/COMMON -I/home/carlos/dualCon/openair2/UTIL -I/home/carlos/dualCon/openair2/UTIL/LOG -I/home/carlos/dualCon/openair3/COMMON -I/home/carlos/dualCon/openair3/UTILS -I/home/carlos/dualCon/nfapi/open-nFAPI/nfapi/public_inc -I/home/carlos/dualCon/nfapi/open-nFAPI/common/public_inc -I/home/carlos/dualCon/nfapi/open-nFAPI/pnf/public_inc -I/home/carlos/dualCon/nfapi/open-nFAPI/nfapi/inc -I/home/carlos/dualCon/nfapi/open-nFAPI/sim_common/inc -I/home/carlos/dualCon/nfapi/open-nFAPI/pnf_sim/inc -I/home/carlos/dualCon/openair1 -I/home/carlos/dualCon/openair2 -I/home/carlos/dualCon/openair3/NAS/TOOLS -I/home/carlos/dualCon/openair2/ENB_APP -I/home/carlos/dualCon/openair2/LAYER2/RLC -I/home/carlos/dualCon/openair2/LAYER2/RLC/AM_v9.3.0 -I/home/carlos/dualCon/openair2/LAYER2/RLC/UM_v9.3.0 -I/home/carlos/dualCon/openair2/LAYER2/RLC/TM_v9.3.0 -I/home/carlos/dualCon/openair2/LAYER2/PDCP_v10.1.0 -I/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES -I/home/carlos/dualCon/openair2/RRC/LTE -I/home/carlos/dualCon/openair2/UE_DC -I/home/carlos/dualCon/common/utils -I/home/carlos/dualCon/common/utils/ocp_itti -I/home/carlos/dualCon/openair3/NAS/COMMON -I/home/carlos/dualCon/openair3/NAS/COMMON/API/NETWORK -I/home/carlos/dualCon/openair3/NAS/COMMON/EMM/MSG -I/home/carlos/dualCon/openair3/NAS/COMMON/ESM/MSG -I/home/carlos/dualCon/openair3/NAS/UE/ESM -I/home/carlos/dualCon/openair3/NAS/UE/EMM -I/home/carlos/dualCon/openair3/NAS/UE/API/USER -I/home/carlos/dualCon/openair3/NAS/COMMON/IES -I/home/carlos/dualCon/openair3/NAS/COMMON/UTIL -I/home/carlos/dualCon/openair3/SECU -I/home/carlos/dualCon/openair3/SCTP -I/home/carlos/dualCon/openair3/UDP -I/home/carlos/dualCon/openair3/GTPV1-U -I/home/carlos/dualCon/targets/COMMON -I/home/carlos/dualCon/openair2/ENB_APP/CONTROL_MODULES/PHY -I/home/carlos/dualCon/openair2/ENB_APP/CONTROL_MODULES/MAC -I/home/carlos/dualCon/openair2/ENB_APP/CONTROL_MODULES/RRC -I/home/carlos/dualCon/openair2/ENB_APP/CONTROL_MODULES/PDCP -I/home/carlos/dualCon/openair2/UTIL/OSA -I/home/carlos/dualCon/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/inc -I/home/carlos/dualCon/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/inc -I/home/carlos/dualCon/openair2/LAYER2/PROTO_AGENT -I/home/carlos/dualCon/openair2/UTIL/MEM -I/home/carlos/dualCon/openair2/UTIL/LISTS -I/home/carlos/dualCon/openair2/UTIL/FIFO -I/home/carlos/dualCon/openair2/UTIL/OCG -I/home/carlos/dualCon/openair2/UTIL/MATH -I/home/carlos/dualCon/openair2/UTIL/TIMER -I/home/carlos/dualCon/openair2/UTIL/OMG -I/home/carlos/dualCon/openair2/UTIL/OTG -I/home/carlos/dualCon/openair2/UTIL/CLI -I/home/carlos/dualCon/openair2/UTIL/OPT -I/home/carlos/dualCon/openair2/UTIL/OMV -I/home/carlos/dualCon/openair3/GTPV1-U/nw-gtpv1u/shared -I/home/carlos/dualCon/openair3/GTPV1-U/nw-gtpv1u/include -I/home/carlos/dualCon -I/home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/FLPT_V2 -I/home/carlos/dualCon/openair2/UTIL/ASYNC_IF -I/home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/FSPT_V2 -I/home/carlos/dualCon/common/utils/hashtable -I/home/carlos/dualCon/common/utils/msc -I/home/carlos/dualCon/nfapi/open-nFAPI/pnf/inc -I/home/carlos/dualCon/nfapi/open-nFAPI/vnf/public_inc -I/home/carlos/dualCon/nfapi/open-nFAPI/vnf/inc -I/home/carlos/dualCon/nfapi/oai_integration -I/home/carlos/dualCon/openair3/NAS/UE -I/home/carlos/dualCon/openair3/NAS/UE/API/USIM -I/home/carlos/dualCon/openair3/NAS/UE/EMM/SAP -I/home/carlos/dualCon/openair3/NAS/UE/ESM/SAP -I/home/carlos/dualCon/openair2/UTIL/LFDS/liblfds6.1.1/liblfds611/src -I/home/carlos/dualCon/openair2/UTIL/LFDS/liblfds7.0.0/liblfds700/src -I/usr/include/libxml2 -I/usr/include/pgm-5.2 -I/usr/lib/x86_64-linux-gnu/pgm-5.2/include -I/usr/include/atlas -I/usr/include/X11 -I/home/carlos/dualCon/common/utils/T 

