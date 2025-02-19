﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafRulePredicateListDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about a WAF rule. This rule specifies the web requests
   * that you want to allow, block, or count. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRuleDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsWafRuleDetails
  {
  public:
    AwsWafRuleDetails();
    AwsWafRuleDetails(Aws::Utils::Json::JsonView jsonValue);
    AwsWafRuleDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the metrics for this rule. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the metrics for this rule. </p>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the metrics for this rule. </p>
     */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the metrics for this rule. </p>
     */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the metrics for this rule. </p>
     */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /**
     * <p>The name of the metrics for this rule. </p>
     */
    inline AwsWafRuleDetails& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the metrics for this rule. </p>
     */
    inline AwsWafRuleDetails& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}

    /**
     * <p>The name of the metrics for this rule. </p>
     */
    inline AwsWafRuleDetails& WithMetricName(const char* value) { SetMetricName(value); return *this;}


    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline AwsWafRuleDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline AwsWafRuleDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive name for the rule. </p>
     */
    inline AwsWafRuleDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline const Aws::Vector<AwsWafRulePredicateListDetails>& GetPredicateList() const{ return m_predicateList; }

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline bool PredicateListHasBeenSet() const { return m_predicateListHasBeenSet; }

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline void SetPredicateList(const Aws::Vector<AwsWafRulePredicateListDetails>& value) { m_predicateListHasBeenSet = true; m_predicateList = value; }

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline void SetPredicateList(Aws::Vector<AwsWafRulePredicateListDetails>&& value) { m_predicateListHasBeenSet = true; m_predicateList = std::move(value); }

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline AwsWafRuleDetails& WithPredicateList(const Aws::Vector<AwsWafRulePredicateListDetails>& value) { SetPredicateList(value); return *this;}

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline AwsWafRuleDetails& WithPredicateList(Aws::Vector<AwsWafRulePredicateListDetails>&& value) { SetPredicateList(std::move(value)); return *this;}

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline AwsWafRuleDetails& AddPredicateList(const AwsWafRulePredicateListDetails& value) { m_predicateListHasBeenSet = true; m_predicateList.push_back(value); return *this; }

    /**
     * <p>Specifies the <code>ByteMatchSet</code>, <code>IPSet</code>,
     * <code>SqlInjectionMatchSet</code>, <code>XssMatchSet</code>,
     * <code>RegexMatchSet</code>, <code>GeoMatchSet</code>, and
     * <code>SizeConstraintSet</code> objects that you want to add to a rule and, for
     * each object, indicates whether you want to negate the settings. </p>
     */
    inline AwsWafRuleDetails& AddPredicateList(AwsWafRulePredicateListDetails&& value) { m_predicateListHasBeenSet = true; m_predicateList.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the WAF rule. </p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The ID of the WAF rule. </p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The ID of the WAF rule. </p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The ID of the WAF rule. </p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The ID of the WAF rule. </p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The ID of the WAF rule. </p>
     */
    inline AwsWafRuleDetails& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The ID of the WAF rule. </p>
     */
    inline AwsWafRuleDetails& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the WAF rule. </p>
     */
    inline AwsWafRuleDetails& WithRuleId(const char* value) { SetRuleId(value); return *this;}

  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<AwsWafRulePredicateListDetails> m_predicateList;
    bool m_predicateListHasBeenSet;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
