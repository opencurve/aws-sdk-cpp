﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Synthetics
{
namespace Model
{

  /**
   */
  class AWS_SYNTHETICS_API DeleteGroupRequest : public SyntheticsRequest
  {
  public:
    DeleteGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGroup"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Specifies which group to delete. You can specify the group name, the ARN, or
     * the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline const Aws::String& GetGroupIdentifier() const{ return m_groupIdentifier; }

    /**
     * <p>Specifies which group to delete. You can specify the group name, the ARN, or
     * the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }

    /**
     * <p>Specifies which group to delete. You can specify the group name, the ARN, or
     * the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline void SetGroupIdentifier(const Aws::String& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = value; }

    /**
     * <p>Specifies which group to delete. You can specify the group name, the ARN, or
     * the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline void SetGroupIdentifier(Aws::String&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::move(value); }

    /**
     * <p>Specifies which group to delete. You can specify the group name, the ARN, or
     * the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline void SetGroupIdentifier(const char* value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier.assign(value); }

    /**
     * <p>Specifies which group to delete. You can specify the group name, the ARN, or
     * the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline DeleteGroupRequest& WithGroupIdentifier(const Aws::String& value) { SetGroupIdentifier(value); return *this;}

    /**
     * <p>Specifies which group to delete. You can specify the group name, the ARN, or
     * the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline DeleteGroupRequest& WithGroupIdentifier(Aws::String&& value) { SetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies which group to delete. You can specify the group name, the ARN, or
     * the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline DeleteGroupRequest& WithGroupIdentifier(const char* value) { SetGroupIdentifier(value); return *this;}

  private:

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
