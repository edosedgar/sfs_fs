#include "sys/types.h"
#include "stdlib.h"

#include "mksfs/mksfs.h"

#include "stdio.h"

int image_create(struct sfs_options sfs_opts) {
        fprintf(stderr, "Dump of struct: \n"
                        "time stamp %lu\n"
                        "data size %lu\n"
                        "index size %lu\n"
                        "total_block %lu\n"
                        "block_size %lu\n"
                        "label %s\n"
                        "file name %s\n", 
                        sfs_opts.time_stamp, sfs_opts.data_size,
                        sfs_opts.index_size, sfs_opts.total_block,
                        sfs_opts.block_size, sfs_opts.label,
                        sfs_opts.file_name); 
                              

        return 0;
}
