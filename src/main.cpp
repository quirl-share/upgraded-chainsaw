
#include <filesystem>
#include "Configuration.h"
#include "actors/Supvervisor.h"

using std::cout;
using std::endl;
using std::string;
namespace fs = std::filesystem;

using namespace std;
using namespace caf;

#ifdef CAF_BEGIN_TYPE_ID_BLOCK
init_global_meta_objects<mixed_case_type_ids>();
#endif

void caf_main(actor_system& system) {
    system.spawn(supervisor);
}

// creates a main function for us that calls our caf_main
CAF_MAIN()
