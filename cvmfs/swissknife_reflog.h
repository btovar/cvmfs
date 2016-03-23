/**
 * This file is part of the CernVM File System.
 */

#ifndef CVMFS_SWISSKNIFE_REFLOG_H_
#define CVMFS_SWISSKNIFE_REFLOG_H_

#include "swissknife.h"

namespace swissknife {

class CommandBootstrapReflog : public Command {
 public:
  CommandBootstrapReflog();
  ~CommandBootstrapReflog();
  std::string GetName() { return "bootstrap_reflog"; }
  std::string GetDescription() {
    return "Bootstraps a Reference Log from Catalog and History chains. This "
           "is used for both legacy repository migration and repairs.";
  }
  ParameterList GetParams();
  int Main(const ArgumentList &args);
};

};  // namespace swissknife

#endif  // CVMFS_SWISSKNIFE_REFLOG_H_
