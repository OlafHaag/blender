extern "C" {
		extern void PbRegister_mantaMsg() ;
		extern void PbRegister_printBuildInfo() ;
		extern void PbRegister_setDebugLevel() ;
		extern void PbRegister_assertNumpy() ;
		extern void PbRegister_cgSolveDiffusion() ;
		extern void PbRegister_gridMaxDiff() ;
		extern void PbRegister_gridMaxDiffInt() ;
		extern void PbRegister_gridMaxDiffVec3() ;
		extern void PbRegister_copyMacToVec3() ;
		extern void PbRegister_convertMacToVec3() ;
		extern void PbRegister_resampleVec3ToMac() ;
		extern void PbRegister_resampleMacToVec3() ;
		extern void PbRegister_copyLevelsetToReal() ;
		extern void PbRegister_copyVec3ToReal() ;
		extern void PbRegister_copyRealToVec3() ;
		extern void PbRegister_convertLevelsetToReal() ;
		extern void PbRegister_swapComponents() ;
		extern void PbRegister_getUvWeight() ;
		extern void PbRegister_resetUvGrid() ;
		extern void PbRegister_updateUvWeight() ;
		extern void PbRegister_getGridAvg() ;
		extern void PbRegister_getComponent() ;
		extern void PbRegister_setComponent() ;
		extern void PbRegister_markIsolatedFluidCell() ;
		extern void PbRegister_getComp4d() ;
		extern void PbRegister_setComp4d() ;
		extern void PbRegister_grid4dMaxDiff() ;
		extern void PbRegister_grid4dMaxDiffInt() ;
		extern void PbRegister_grid4dMaxDiffVec3() ;
		extern void PbRegister_grid4dMaxDiffVec4() ;
		extern void PbRegister_setRegion4d() ;
		extern void PbRegister_setRegion4dVec4() ;
		extern void PbRegister_getSliceFrom4d() ;
		extern void PbRegister_getSliceFrom4dVec() ;
		extern void PbRegister_interpolateGrid4d() ;
		extern void PbRegister_interpolateGrid4dVec() ;
		extern void PbRegister_extrapolateMACSimple() ;
		extern void PbRegister_extrapolateMACFromWeight() ;
		extern void PbRegister_extrapolateLsSimple() ;
		extern void PbRegister_extrapolateVec3Simple() ;
		extern void PbRegister_getUniFileSize() ;
		extern void PbRegister_printUniFileInfoString() ;
		extern void PbRegister_quantizeGrid() ;
		extern void PbRegister_quantizeGridVec3() ;
		extern void PbRegister_resetPhiInObs() ;
		extern void PbRegister_advectSemiLagrange() ;
		extern void PbRegister_addGravity() ;
		extern void PbRegister_addGravityNoScale() ;
		extern void PbRegister_addBuoyancy() ;
		extern void PbRegister_setOpenBound() ;
		extern void PbRegister_resetOutflow() ;
		extern void PbRegister_setInflowBcs() ;
		extern void PbRegister_setWallBcs() ;
		extern void PbRegister_setInitialVelocity() ;
		extern void PbRegister_vorticityConfinement() ;
		extern void PbRegister_addForceField() ;
		extern void PbRegister_setForceField() ;
		extern void PbRegister_apicMapPartsToMAC() ;
		extern void PbRegister_apicMapMACGridToParts() ;
		extern void PbRegister_sampleFlagsWithParticles() ;
		extern void PbRegister_sampleLevelsetWithParticles() ;
		extern void PbRegister_sampleShapeWithParticles() ;
		extern void PbRegister_markFluidCells() ;
		extern void PbRegister_testInitGridWithPos() ;
		extern void PbRegister_adjustNumber() ;
		extern void PbRegister_debugIntToReal() ;
		extern void PbRegister_gridParticleIndex() ;
		extern void PbRegister_unionParticleLevelset() ;
		extern void PbRegister_averagedParticleLevelset() ;
		extern void PbRegister_improvedParticleLevelset() ;
		extern void PbRegister_pushOutofObs() ;
		extern void PbRegister_mapPartsToMAC() ;
		extern void PbRegister_mapPartsToGrid() ;
		extern void PbRegister_mapPartsToGridVec3() ;
		extern void PbRegister_mapGridToParts() ;
		extern void PbRegister_mapGridToPartsVec3() ;
		extern void PbRegister_mapMACToParts() ;
		extern void PbRegister_flipVelocityUpdate() ;
		extern void PbRegister_combineGridVel() ;
		extern void PbRegister_getLaplacian() ;
		extern void PbRegister_getCurvature() ;
		extern void PbRegister_processBurn() ;
		extern void PbRegister_updateFlame() ;
		extern void PbRegister_getSpiralVelocity() ;
		extern void PbRegister_setGradientYWeight() ;
		extern void PbRegister_PD_fluid_guiding() ;
		extern void PbRegister_releaseBlurPrecomp() ;
		extern void PbRegister_KEpsilonComputeProduction() ;
		extern void PbRegister_KEpsilonSources() ;
		extern void PbRegister_KEpsilonBcs() ;
		extern void PbRegister_KEpsilonGradientDiffusion() ;
		extern void PbRegister_densityInflow() ;
		extern void PbRegister_addNoise() ;
		extern void PbRegister_setNoisePdata() ;
		extern void PbRegister_setNoisePdataVec3() ;
		extern void PbRegister_setNoisePdataInt() ;
		extern void PbRegister_obstacleGradient() ;
		extern void PbRegister_obstacleLevelset() ;
		extern void PbRegister_applyEmission() ;
		extern void PbRegister_densityInflowMeshNoise() ;
		extern void PbRegister_densityInflowMesh() ;
		extern void PbRegister_checkSymmetry() ;
		extern void PbRegister_checkSymmetryVec3() ;
		extern void PbRegister_projectPpmFull() ;
		extern void PbRegister_addTestParts() ;
		extern void PbRegister_pdataMaxDiff() ;
		extern void PbRegister_calcCenterOfMass() ;
		extern void PbRegister_updateFractions() ;
		extern void PbRegister_setObstacleFlags() ;
		extern void PbRegister_initVortexVelocity() ;
		extern void PbRegister_blurMacGrid() ;
		extern void PbRegister_blurRealGrid() ;
		extern void PbRegister_smoothMesh() ;
		extern void PbRegister_subdivideMesh() ;
		extern void PbRegister_killSmallComponents() ;
		extern void PbRegister_releaseMG() ;
		extern void PbRegister_computePressureRhs() ;
		extern void PbRegister_solvePressureSystem() ;
		extern void PbRegister_correctVelocity() ;
		extern void PbRegister_solvePressure() ;
		extern void PbRegister_flipComputeSecondaryParticlePotentials() ;
		extern void PbRegister_flipSampleSecondaryParticles() ;
		extern void PbRegister_flipUpdateSecondaryParticles() ;
		extern void PbRegister_flipDeleteParticlesInObstacle() ;
		extern void PbRegister_debugGridInfo() ;
		extern void PbRegister_setFlagsFromLevelset() ;
		extern void PbRegister_setMACFromLevelset() ;
		extern void PbRegister_flipComputePotentialTrappedAir() ;
		extern void PbRegister_flipComputePotentialKineticEnergy() ;
		extern void PbRegister_flipComputePotentialWaveCrest() ;
		extern void PbRegister_flipComputeSurfaceNormals() ;
		extern void PbRegister_flipUpdateNeighborRatio() ;
		extern void PbRegister_adjustSndParts() ;
		extern void PbRegister_updateSndParts() ;
		extern void PbRegister_sampleSndParts() ;
		extern void PbRegister_addForcePvel() ;
		extern void PbRegister_updateVelocityFromDeltaPos() ;
		extern void PbRegister_eulerStep() ;
		extern void PbRegister_setPartType() ;
		extern void PbRegister_particleSurfaceTurbulence() ;
		extern void PbRegister_debugCheckParts() ;
		extern void PbRegister_markAsFixed() ;
		extern void PbRegister_texcoordInflow() ;
		extern void PbRegister_meshSmokeInflow() ;
		extern void PbRegister_vorticitySource() ;
		extern void PbRegister_smoothVorticity() ;
		extern void PbRegister_VPseedK41() ;
		extern void PbRegister_VICintegration() ;
		extern void PbRegister_densityFromLevelset() ;
		extern void PbRegister_interpolateGrid() ;
		extern void PbRegister_interpolateGridVec3() ;
		extern void PbRegister_interpolateMACGrid() ;
		extern void PbRegister_applySimpleNoiseVec3() ;
		extern void PbRegister_applySimpleNoiseReal() ;
		extern void PbRegister_applyNoiseVec3() ;
		extern void PbRegister_computeEnergy() ;
		extern void PbRegister_computeWaveletCoeffs() ;
		extern void PbRegister_computeVorticity() ;
		extern void PbRegister_computeStrainRateMag() ;
		extern void PbRegister_extrapolateSimpleFlags() ;
		extern void PbRegister_getCurl() ;
		extern void PbRegister_calcSecDeriv2d() ;
		extern void PbRegister_totalSum() ;
		extern void PbRegister_normalizeSumTo() ;
		extern void PbRegister_cgSolveWE() ;
		extern void PbRegister_file_0();
		extern void PbRegister_file_1();
		extern void PbRegister_file_2();
		extern void PbRegister_file_3();
		extern void PbRegister_file_4();
		extern void PbRegister_file_5();
		extern void PbRegister_file_6();
		extern void PbRegister_file_7();
		extern void PbRegister_file_8();
		extern void PbRegister_file_9();
		extern void PbRegister_file_10();
		extern void PbRegister_file_11();
		extern void PbRegister_file_12();
		extern void PbRegister_file_13();
		extern void PbRegister_file_14();
		extern void PbRegister_file_15();
		extern void PbRegister_file_16();
		extern void PbRegister_file_17();
		extern void PbRegister_file_18();
		extern void PbRegister_file_19();
		extern void PbRegister_file_20();
		extern void PbRegister_file_21();
}

namespace Pb {
	void MantaEnsureRegistration()
	{
		PbRegister_mantaMsg() ;
		PbRegister_printBuildInfo() ;
		PbRegister_setDebugLevel() ;
		PbRegister_assertNumpy() ;
		PbRegister_cgSolveDiffusion() ;
		PbRegister_gridMaxDiff() ;
		PbRegister_gridMaxDiffInt() ;
		PbRegister_gridMaxDiffVec3() ;
		PbRegister_copyMacToVec3() ;
		PbRegister_convertMacToVec3() ;
		PbRegister_resampleVec3ToMac() ;
		PbRegister_resampleMacToVec3() ;
		PbRegister_copyLevelsetToReal() ;
		PbRegister_copyVec3ToReal() ;
		PbRegister_copyRealToVec3() ;
		PbRegister_convertLevelsetToReal() ;
		PbRegister_swapComponents() ;
		PbRegister_getUvWeight() ;
		PbRegister_resetUvGrid() ;
		PbRegister_updateUvWeight() ;
		PbRegister_getGridAvg() ;
		PbRegister_getComponent() ;
		PbRegister_setComponent() ;
		PbRegister_markIsolatedFluidCell() ;
		PbRegister_getComp4d() ;
		PbRegister_setComp4d() ;
		PbRegister_grid4dMaxDiff() ;
		PbRegister_grid4dMaxDiffInt() ;
		PbRegister_grid4dMaxDiffVec3() ;
		PbRegister_grid4dMaxDiffVec4() ;
		PbRegister_setRegion4d() ;
		PbRegister_setRegion4dVec4() ;
		PbRegister_getSliceFrom4d() ;
		PbRegister_getSliceFrom4dVec() ;
		PbRegister_interpolateGrid4d() ;
		PbRegister_interpolateGrid4dVec() ;
		PbRegister_extrapolateMACSimple() ;
		PbRegister_extrapolateMACFromWeight() ;
		PbRegister_extrapolateLsSimple() ;
		PbRegister_extrapolateVec3Simple() ;
		PbRegister_getUniFileSize() ;
		PbRegister_printUniFileInfoString() ;
		PbRegister_quantizeGrid() ;
		PbRegister_quantizeGridVec3() ;
		PbRegister_resetPhiInObs() ;
		PbRegister_advectSemiLagrange() ;
		PbRegister_addGravity() ;
		PbRegister_addGravityNoScale() ;
		PbRegister_addBuoyancy() ;
		PbRegister_setOpenBound() ;
		PbRegister_resetOutflow() ;
		PbRegister_setInflowBcs() ;
		PbRegister_setWallBcs() ;
		PbRegister_setInitialVelocity() ;
		PbRegister_vorticityConfinement() ;
		PbRegister_addForceField() ;
		PbRegister_setForceField() ;
		PbRegister_apicMapPartsToMAC() ;
		PbRegister_apicMapMACGridToParts() ;
		PbRegister_sampleFlagsWithParticles() ;
		PbRegister_sampleLevelsetWithParticles() ;
		PbRegister_sampleShapeWithParticles() ;
		PbRegister_markFluidCells() ;
		PbRegister_testInitGridWithPos() ;
		PbRegister_adjustNumber() ;
		PbRegister_debugIntToReal() ;
		PbRegister_gridParticleIndex() ;
		PbRegister_unionParticleLevelset() ;
		PbRegister_averagedParticleLevelset() ;
		PbRegister_improvedParticleLevelset() ;
		PbRegister_pushOutofObs() ;
		PbRegister_mapPartsToMAC() ;
		PbRegister_mapPartsToGrid() ;
		PbRegister_mapPartsToGridVec3() ;
		PbRegister_mapGridToParts() ;
		PbRegister_mapGridToPartsVec3() ;
		PbRegister_mapMACToParts() ;
		PbRegister_flipVelocityUpdate() ;
		PbRegister_combineGridVel() ;
		PbRegister_getLaplacian() ;
		PbRegister_getCurvature() ;
		PbRegister_processBurn() ;
		PbRegister_updateFlame() ;
		PbRegister_getSpiralVelocity() ;
		PbRegister_setGradientYWeight() ;
		PbRegister_PD_fluid_guiding() ;
		PbRegister_releaseBlurPrecomp() ;
		PbRegister_KEpsilonComputeProduction() ;
		PbRegister_KEpsilonSources() ;
		PbRegister_KEpsilonBcs() ;
		PbRegister_KEpsilonGradientDiffusion() ;
		PbRegister_densityInflow() ;
		PbRegister_addNoise() ;
		PbRegister_setNoisePdata() ;
		PbRegister_setNoisePdataVec3() ;
		PbRegister_setNoisePdataInt() ;
		PbRegister_obstacleGradient() ;
		PbRegister_obstacleLevelset() ;
		PbRegister_applyEmission() ;
		PbRegister_densityInflowMeshNoise() ;
		PbRegister_densityInflowMesh() ;
		PbRegister_checkSymmetry() ;
		PbRegister_checkSymmetryVec3() ;
		PbRegister_projectPpmFull() ;
		PbRegister_addTestParts() ;
		PbRegister_pdataMaxDiff() ;
		PbRegister_calcCenterOfMass() ;
		PbRegister_updateFractions() ;
		PbRegister_setObstacleFlags() ;
		PbRegister_initVortexVelocity() ;
		PbRegister_blurMacGrid() ;
		PbRegister_blurRealGrid() ;
		PbRegister_smoothMesh() ;
		PbRegister_subdivideMesh() ;
		PbRegister_killSmallComponents() ;
		PbRegister_releaseMG() ;
		PbRegister_computePressureRhs() ;
		PbRegister_solvePressureSystem() ;
		PbRegister_correctVelocity() ;
		PbRegister_solvePressure() ;
		PbRegister_flipComputeSecondaryParticlePotentials() ;
		PbRegister_flipSampleSecondaryParticles() ;
		PbRegister_flipUpdateSecondaryParticles() ;
		PbRegister_flipDeleteParticlesInObstacle() ;
		PbRegister_debugGridInfo() ;
		PbRegister_setFlagsFromLevelset() ;
		PbRegister_setMACFromLevelset() ;
		PbRegister_flipComputePotentialTrappedAir() ;
		PbRegister_flipComputePotentialKineticEnergy() ;
		PbRegister_flipComputePotentialWaveCrest() ;
		PbRegister_flipComputeSurfaceNormals() ;
		PbRegister_flipUpdateNeighborRatio() ;
		PbRegister_adjustSndParts() ;
		PbRegister_updateSndParts() ;
		PbRegister_sampleSndParts() ;
		PbRegister_addForcePvel() ;
		PbRegister_updateVelocityFromDeltaPos() ;
		PbRegister_eulerStep() ;
		PbRegister_setPartType() ;
		PbRegister_particleSurfaceTurbulence() ;
		PbRegister_debugCheckParts() ;
		PbRegister_markAsFixed() ;
		PbRegister_texcoordInflow() ;
		PbRegister_meshSmokeInflow() ;
		PbRegister_vorticitySource() ;
		PbRegister_smoothVorticity() ;
		PbRegister_VPseedK41() ;
		PbRegister_VICintegration() ;
		PbRegister_densityFromLevelset() ;
		PbRegister_interpolateGrid() ;
		PbRegister_interpolateGridVec3() ;
		PbRegister_interpolateMACGrid() ;
		PbRegister_applySimpleNoiseVec3() ;
		PbRegister_applySimpleNoiseReal() ;
		PbRegister_applyNoiseVec3() ;
		PbRegister_computeEnergy() ;
		PbRegister_computeWaveletCoeffs() ;
		PbRegister_computeVorticity() ;
		PbRegister_computeStrainRateMag() ;
		PbRegister_extrapolateSimpleFlags() ;
		PbRegister_getCurl() ;
		PbRegister_calcSecDeriv2d() ;
		PbRegister_totalSum() ;
		PbRegister_normalizeSumTo() ;
		PbRegister_cgSolveWE() ;
		PbRegister_file_0();
		PbRegister_file_1();
		PbRegister_file_2();
		PbRegister_file_3();
		PbRegister_file_4();
		PbRegister_file_5();
		PbRegister_file_6();
		PbRegister_file_7();
		PbRegister_file_8();
		PbRegister_file_9();
		PbRegister_file_10();
		PbRegister_file_11();
		PbRegister_file_12();
		PbRegister_file_13();
		PbRegister_file_14();
		PbRegister_file_15();
		PbRegister_file_16();
		PbRegister_file_17();
		PbRegister_file_18();
		PbRegister_file_19();
		PbRegister_file_20();
		PbRegister_file_21();
	}
}
