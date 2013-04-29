#ifndef THIN_SUPERBLOCK_CHECKER_H
#define THIN_SUPERBLOCK_CHECKER_H

#include "thin-provisioning/metadata_checker.h"

//----------------------------------------------------------------

namespace thin_provisioning {
	class superblock_checker : public checker {
	public:
		superblock_checker(block_manager::ptr bm);
		damage_list_ptr check();

	private:
		// FIXME: surely we can push these down to the base class?
		block_manager::ptr bm_;
		damage_list_ptr damage;
	};
}

//----------------------------------------------------------------

#endif