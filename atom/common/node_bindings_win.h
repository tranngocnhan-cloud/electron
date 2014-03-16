// Copyright (c) 2013 GitHub, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ATOM_COMMON_NODE_BINDINGS_WIN_H_
#define ATOM_COMMON_NODE_BINDINGS_WIN_H_

#include "base/compiler_specific.h"
#include "atom/common/node_bindings.h"

namespace atom {

class NodeBindingsWin : public NodeBindings {
 public:
  explicit NodeBindingsWin(bool is_browser);
  virtual ~NodeBindingsWin();

 private:
  virtual void PollEvents() OVERRIDE;

  DISALLOW_COPY_AND_ASSIGN(NodeBindingsWin);
};

}  // namespace atom

#endif  // ATOM_COMMON_NODE_BINDINGS_WIN_H_
