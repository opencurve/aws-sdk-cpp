﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceSelectionConfig.h>
#include <aws/sagemaker/model/EdgeDeploymentConfig.h>
#include <aws/sagemaker/model/EdgeDeploymentStatus.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Contains information summarizing the deployment stage results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeploymentStageStatusSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API DeploymentStageStatusSummary
  {
  public:
    DeploymentStageStatusSummary();
    DeploymentStageStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    DeploymentStageStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline DeploymentStageStatusSummary& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline DeploymentStageStatusSummary& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline DeploymentStageStatusSummary& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>Configuration of the devices in the stage.</p>
     */
    inline const DeviceSelectionConfig& GetDeviceSelectionConfig() const{ return m_deviceSelectionConfig; }

    /**
     * <p>Configuration of the devices in the stage.</p>
     */
    inline bool DeviceSelectionConfigHasBeenSet() const { return m_deviceSelectionConfigHasBeenSet; }

    /**
     * <p>Configuration of the devices in the stage.</p>
     */
    inline void SetDeviceSelectionConfig(const DeviceSelectionConfig& value) { m_deviceSelectionConfigHasBeenSet = true; m_deviceSelectionConfig = value; }

    /**
     * <p>Configuration of the devices in the stage.</p>
     */
    inline void SetDeviceSelectionConfig(DeviceSelectionConfig&& value) { m_deviceSelectionConfigHasBeenSet = true; m_deviceSelectionConfig = std::move(value); }

    /**
     * <p>Configuration of the devices in the stage.</p>
     */
    inline DeploymentStageStatusSummary& WithDeviceSelectionConfig(const DeviceSelectionConfig& value) { SetDeviceSelectionConfig(value); return *this;}

    /**
     * <p>Configuration of the devices in the stage.</p>
     */
    inline DeploymentStageStatusSummary& WithDeviceSelectionConfig(DeviceSelectionConfig&& value) { SetDeviceSelectionConfig(std::move(value)); return *this;}


    /**
     * <p>Configuration of the deployment details.</p>
     */
    inline const EdgeDeploymentConfig& GetDeploymentConfig() const{ return m_deploymentConfig; }

    /**
     * <p>Configuration of the deployment details.</p>
     */
    inline bool DeploymentConfigHasBeenSet() const { return m_deploymentConfigHasBeenSet; }

    /**
     * <p>Configuration of the deployment details.</p>
     */
    inline void SetDeploymentConfig(const EdgeDeploymentConfig& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = value; }

    /**
     * <p>Configuration of the deployment details.</p>
     */
    inline void SetDeploymentConfig(EdgeDeploymentConfig&& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = std::move(value); }

    /**
     * <p>Configuration of the deployment details.</p>
     */
    inline DeploymentStageStatusSummary& WithDeploymentConfig(const EdgeDeploymentConfig& value) { SetDeploymentConfig(value); return *this;}

    /**
     * <p>Configuration of the deployment details.</p>
     */
    inline DeploymentStageStatusSummary& WithDeploymentConfig(EdgeDeploymentConfig&& value) { SetDeploymentConfig(std::move(value)); return *this;}


    /**
     * <p>General status of the current state.</p>
     */
    inline const EdgeDeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * <p>General status of the current state.</p>
     */
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }

    /**
     * <p>General status of the current state.</p>
     */
    inline void SetDeploymentStatus(const EdgeDeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }

    /**
     * <p>General status of the current state.</p>
     */
    inline void SetDeploymentStatus(EdgeDeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }

    /**
     * <p>General status of the current state.</p>
     */
    inline DeploymentStageStatusSummary& WithDeploymentStatus(const EdgeDeploymentStatus& value) { SetDeploymentStatus(value); return *this;}

    /**
     * <p>General status of the current state.</p>
     */
    inline DeploymentStageStatusSummary& WithDeploymentStatus(EdgeDeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}

  private:

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;

    DeviceSelectionConfig m_deviceSelectionConfig;
    bool m_deviceSelectionConfigHasBeenSet;

    EdgeDeploymentConfig m_deploymentConfig;
    bool m_deploymentConfigHasBeenSet;

    EdgeDeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
