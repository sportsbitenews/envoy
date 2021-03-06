#include "mocks.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"

namespace Envoy {
using testing::ReturnArg;
using testing::_;

namespace Runtime {

MockSnapshot::MockSnapshot() { ON_CALL(*this, getInteger(_, _)).WillByDefault(ReturnArg<1>()); }

MockSnapshot::~MockSnapshot() {}

MockLoader::MockLoader() { ON_CALL(*this, snapshot()).WillByDefault(ReturnRef(snapshot_)); }

MockLoader::~MockLoader() {}

} // namespace Runtime
} // namespace Envoy
