﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class AWS_KENDRA_API ListAccessControlConfigurationsRequest : public KendraRequest
  {
  public:
    ListAccessControlConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessControlConfigurations"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index for the access control configuration.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index for the access control configuration.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index for the access control configuration.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index for the access control configuration.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index for the access control configuration.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index for the access control configuration.</p>
     */
    inline ListAccessControlConfigurationsRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for the access control configuration.</p>
     */
    inline ListAccessControlConfigurationsRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for the access control configuration.</p>
     */
    inline ListAccessControlConfigurationsRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of access control
     * configurations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of access control
     * configurations.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of access control
     * configurations.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of access control
     * configurations.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of access control
     * configurations.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of access control
     * configurations.</p>
     */
    inline ListAccessControlConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of access control
     * configurations.</p>
     */
    inline ListAccessControlConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of access control
     * configurations.</p>
     */
    inline ListAccessControlConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of access control configurations to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of access control configurations to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of access control configurations to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of access control configurations to return.</p>
     */
    inline ListAccessControlConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
