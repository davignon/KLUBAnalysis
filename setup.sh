THISDIR=`pwd`
echo $THISDIR
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${THISDIR}/lib
echo ${LD_LIBRARY_PATH}

if [ -n "${DYLD_LIBRARY_PATH}" ] ; then
export DYLD_LIBRARY_PATH=${DYLD_LIBRARY_PATH}:${THISDIR}/lib
fi


export PATH=${PATH}:${THISDIR}/bin