/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKHealthStoreClientInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKQueryDelegate.h>

@protocol OS_dispatch_queue, HDHealthStoreServerInterface, _HKAuthorizationPresentationController, _HKDocumentPickerPresentationController;
@class NSObject, _HKXPCConnection, NSBundle, NSString, HKProfileIdentifier, HKHealthServicesManager, NSMutableSet, HKHealthStoreIdentifier, NSSet;

@interface HKHealthStore : NSObject <HKHealthStoreClientInterface, _HKXPCExportable, HKQueryDelegate> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	_HKXPCConnection* _healthdConnection;
	NSBundle* _sourceBundle;
	NSString* _sourceBundleIdentifier;
	NSString* _debugIdentifier;
	HKProfileIdentifier* _profileIdentifier;
	unsigned _applicationSDKVersion;
	id<HDHealthStoreServerInterface> _serverProxy;
	id<_HKAuthorizationPresentationController> _authorizationPresentationController;
	id<_HKDocumentPickerPresentationController> _documentPickerPresentationController;
	/*^block*/id _authorizationDelegateTransactionErrorHandler;
	HKHealthServicesManager* _healthServicesManager;
	NSMutableSet* _queries;
	BOOL _resumeRequired;
	BOOL _resumed;
	NSString* _writeAuthorizationUsageDescriptionOverride;
	NSString* _readAuthorizationUsageDescriptionOverride;
	NSString* _clinicalReadAuthorizationUsageDescriptionOverride;
	NSString* _researchStudyUsageDescriptionOverride;
	NSString* _daemonLaunchDarwinNotificationName;
	NSObject*<OS_dispatch_queue> _clientQueue;
	HKHealthStoreIdentifier* _identifier;

}

@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy) NSString * writeAuthorizationUsageDescriptionOverride;                     //@synthesize writeAuthorizationUsageDescriptionOverride=_writeAuthorizationUsageDescriptionOverride - In the implementation block
@property (nonatomic,copy) NSString * readAuthorizationUsageDescriptionOverride;                      //@synthesize readAuthorizationUsageDescriptionOverride=_readAuthorizationUsageDescriptionOverride - In the implementation block
@property (nonatomic,copy) NSString * clinicalReadAuthorizationUsageDescriptionOverride;              //@synthesize clinicalReadAuthorizationUsageDescriptionOverride=_clinicalReadAuthorizationUsageDescriptionOverride - In the implementation block
@property (nonatomic,copy) NSString * researchStudyUsageDescriptionOverride;                          //@synthesize researchStudyUsageDescriptionOverride=_researchStudyUsageDescriptionOverride - In the implementation block
@property (nonatomic,copy) NSString * daemonLaunchDarwinNotificationName;                             //@synthesize daemonLaunchDarwinNotificationName=_daemonLaunchDarwinNotificationName - In the implementation block
@property (nonatomic,readonly) HKHealthServicesManager * healthServicesManager; 
@property (nonatomic,readonly) unsigned applicationSDKVersion; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (getter=_queries,copy,readonly) NSSet * queries; 
@property (copy,readonly) HKHealthStoreIdentifier * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (copy) HKProfileIdentifier * profileIdentifier; 
@property (copy) NSString * sourceBundleIdentifier; 
@property (retain) NSBundle * sourceBundle; 
@property (copy) NSString * debugIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isHealthDataAvailable;
+(BOOL)_applicationHasRunningWorkout;
-(id)init;
-(void)dealloc;
-(HKHealthStoreIdentifier *)identifier;
-(void)resume;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(id)exportedInterface;
-(id)_initWithIdentifier:(id)arg1 ;
-(NSString *)firstName;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(NSString *)debugIdentifier;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)connectionInvalidated;
-(HKProfileIdentifier *)profileIdentifier;
-(void)setProfileIdentifier:(HKProfileIdentifier *)arg1 ;
-(id)_queries;
-(void)executeQuery:(id)arg1 ;
-(id)remoteInterface;
-(void)connectionInterrupted;
-(HKHealthServicesManager *)healthServicesManager;
-(void)startHealthServiceDiscovery:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)endHealthServiceDiscovery:(id)arg1 ;
-(void)startHealthServiceSession:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)endHealthServiceSession:(id)arg1 ;
-(void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)healthServicePairingsWithHandler:(/*^block*/id)arg1 ;
-(void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)addHealthServicePairing:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeHealthServicePairing:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSString *)sourceBundleIdentifier;
-(unsigned)applicationSDKVersion;
-(void)forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchNanoSyncPairedDevicesWithCompletion:(/*^block*/id)arg1 ;
-(void)forceNanoSyncWithPullRequest:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceLastChanceNanoSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)resetNanoSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithListenerEndpoint:(id)arg1 debugIdentifier:(id)arg2 ;
-(void)_faultIfInnappropriateHost;
-(void)_connectionQueue_setUpWithEndpoint:(id)arg1 ;
-(void)_setConfigurationPropertyUsingBlock:(/*^block*/id)arg1 ;
-(NSBundle *)sourceBundle;
-(void)_discardServerProxiesForServer:(id)arg1 ;
-(void)_serverProxyWithCompletion:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_actionCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(BOOL)_prepareObjectsForSaving:(id)arg1 errorOut:(id*)arg2 ;
-(void)_validateAuthorizationRequestWithShareTypes:(id)arg1 readTypes:(id)arg2 ;
-(void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_throwIfClinicalTypesRequestedToShare:(id)arg1 ;
-(void)_throwIfParentTypeNotRequestedForSharing:(BOOL)arg1 types:(id)arg2 ;
-(void)_throwIfAuthorizationDisallowedForSharing:(BOOL)arg1 types:(id)arg2 ;
-(void)_validateAuthorizationRequiredTypes;
-(void)_validatePurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2 ;
-(id)_sourceBundleOrDefaultBundle;
-(void)_validateClinicalHealthRecordsPurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2 ;
-(void)_validateHealthDataPurposeStringsForSharingTypes:(id)arg1 readingTypes:(id)arg2 isResearchStudy:(BOOL)arg3 ;
-(id)_clientClinicalReadAuthorizationUsageDescription;
-(id)_researchStudyUsageDescription;
-(id)_clientWriteAuthorizationUsageDescription;
-(id)_clientReadAuthorizationUsageDescription;
-(void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)arg1 ;
-(id)_clinicalAuthorizationPresentationRequestForRecord:(id)arg1 ;
-(id)_healthDataAuthorizationPresentationRequestForRecord:(id)arg1 ;
-(void)saveObjects:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_saveObjects:(id)arg1 atomically:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendNextObjectBatch:(id)arg1 lastRange:(NSRange)arg2 server:(id)arg3 transaction:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_deleteObjects:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)executeQuery:(id)arg1 activationHandler:(/*^block*/id)arg2 ;
-(void)_addQuery:(id)arg1 ;
-(void)_removeQuery:(id)arg1 ;
-(id)dateOfBirthComponentsWithError:(id*)arg1 ;
-(id)_characteristicForDataType:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setCharacteristic:(id)arg1 forDataType:(id)arg2 error:(id*)arg3 ;
-(/*^block*/id)_objectCompletionOnClientQueue:(/*^block*/id)arg1 ;
-(void)_closeTransactionWithType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 ;
-(void)_setBackgroundDeliveryFrequencyDataType:(id)arg1 frequency:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)preferredUnitsForQuantityTypes:(id)arg1 version:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchMedicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
-(void)badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(void)clientRemote_presentAuthorizationWithRequestRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clientRemote_presentAuthorizationWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clientRemote_unitPreferencesDidUpdate;
-(void)clientRemote_conceptIndexManagerDidBecomeQuiescentWithSamplesProcessedCount:(long long)arg1 ;
-(void)queryDidFinishExecuting:(id)arg1 ;
-(void)closeTransactionForType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 query:(id)arg4 ;
-(id)unitTest_replaceListenerEndpoint:(id)arg1 ;
-(void)unitTest_setApplicationSDKVersion:(unsigned)arg1 ;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(void)setSourceBundle:(NSBundle *)arg1 ;
-(void)fetchPluginServiceEndpointForIdentifier:(id)arg1 endpointHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)fetchTaskServerEndpointForIdentifier:(id)arg1 pluginURL:(id)arg2 taskUUID:(id)arg3 configuration:(id)arg4 endpointHandler:(/*^block*/id)arg5 errorHandler:(/*^block*/id)arg6 ;
-(void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteClientSourceWithCompletion:(/*^block*/id)arg1 ;
-(void)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveObjects:(id)arg1 deleteObjects:(id)arg2 associations:(id)arg3 completion:(/*^block*/id)arg4 ;
-(long long)authorizationStatusForType:(id)arg1 ;
-(void)getRequestStatusForAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleAuthorizationForExtensionWithCompletion:(/*^block*/id)arg1 ;
-(void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 sourceHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2 ;
-(id)earliestPermittedSampleDate;
-(void)saveObject:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteObject:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteObjects:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteObjectsOfType:(id)arg1 predicate:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteObject:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)deleteObjects:(id)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)stopQuery:(id)arg1 ;
-(id)dateOfBirthWithError:(id*)arg1 ;
-(BOOL)_setDateOfBirthComponents:(id)arg1 error:(id*)arg2 ;
-(id)biologicalSexWithError:(id*)arg1 ;
-(BOOL)_setBiologicalSex:(long long)arg1 error:(id*)arg2 ;
-(id)bloodTypeWithError:(id*)arg1 ;
-(BOOL)_setBloodType:(long long)arg1 error:(id*)arg2 ;
-(id)fitzpatrickSkinTypeWithError:(id*)arg1 ;
-(BOOL)_setFitzpatrickSkinType:(long long)arg1 error:(id*)arg2 ;
-(id)wheelchairUseWithError:(id*)arg1 ;
-(BOOL)_setWheelchairUse:(long long)arg1 error:(id*)arg2 ;
-(id)_cardioFitnessMedicationsUseWithError:(id*)arg1 ;
-(BOOL)_setCardioFitnessMedicationsUse:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_bodyMassCharacteristicQuantityWithError:(id*)arg1 ;
-(BOOL)_setBodyMassCharacteristicQuantity:(id)arg1 error:(id*)arg2 ;
-(id)_leanBodyMassCharacteristicQuantityWithError:(id*)arg1 ;
-(BOOL)_setLeanBodyMassCharacteristicQuantity:(id)arg1 error:(id*)arg2 ;
-(id)_heightCharacteristicQuantityWithError:(id*)arg1 ;
-(BOOL)_setHeightCharacteristicQuantity:(id)arg1 error:(id*)arg2 ;
-(id)_userEnteredMenstrualCycleLengthCharacteristicQuantityWithError:(id*)arg1 ;
-(BOOL)_setUserEnteredMenstrualCycleLengthCharacteristicQuantity:(id)arg1 error:(id*)arg2 ;
-(id)_userEnteredMenstrualPeriodLengthCharacteristicQuantityWithError:(id*)arg1 ;
-(BOOL)_setUserEnteredMenstrualPeriodLengthCharacteristicQuantity:(id)arg1 error:(id*)arg2 ;
-(id)activityMoveModeWithError:(id*)arg1 ;
-(id)_activityMoveModeWithError:(id*)arg1 ;
-(BOOL)_setActivityMoveMode:(long long)arg1 error:(id*)arg2 ;
-(BOOL)supportsHealthRecords;
-(void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_replaceWorkout:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startWorkoutSession:(id)arg1 ;
-(void)endWorkoutSession:(id)arg1 ;
-(void)pauseWorkoutSession:(id)arg1 ;
-(void)resumeWorkoutSession:(id)arg1 ;
-(void)startWatchAppWithWorkoutConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recoverActiveWorkoutSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)enableBackgroundDeliveryForType:(id)arg1 frequency:(long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)disableBackgroundDeliveryForType:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)disableAllBackgroundDeliveryWithCompletion:(/*^block*/id)arg1 ;
-(void)preferredUnitsForQuantityTypes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removePreferredUnitForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)splitTotalEnergy:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 resultsHandler:(/*^block*/id)arg4 ;
-(void)setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getHealthLiteValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchServerURLForAssetType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setServerURL:(id)arg1 forAssetType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchMedicalIDDataCreateIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateMedicalIDData:(id)arg1 ;
-(void)deleteMedicalIDData;
-(void)dropEntitlement:(id)arg1 ;
-(void)restoreEntitlement:(id)arg1 ;
-(NSString *)writeAuthorizationUsageDescriptionOverride;
-(void)setWriteAuthorizationUsageDescriptionOverride:(NSString *)arg1 ;
-(NSString *)readAuthorizationUsageDescriptionOverride;
-(void)setReadAuthorizationUsageDescriptionOverride:(NSString *)arg1 ;
-(NSString *)clinicalReadAuthorizationUsageDescriptionOverride;
-(void)setClinicalReadAuthorizationUsageDescriptionOverride:(NSString *)arg1 ;
-(NSString *)researchStudyUsageDescriptionOverride;
-(void)setResearchStudyUsageDescriptionOverride:(NSString *)arg1 ;
-(NSString *)daemonLaunchDarwinNotificationName;
-(void)setDaemonLaunchDarwinNotificationName:(NSString *)arg1 ;
-(void)profileIdentifierForNRDeviceUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)forceCloudSyncWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)forceCloudSyncDataUploadForProfileWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCloudSyncRequiredWithCompletion:(/*^block*/id)arg1 ;
-(void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(/*^block*/id)arg1 ;
-(void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)getHealthDirectorySizeInBytesWithCompletion:(/*^block*/id)arg1 ;
-(void)_currentValueForQuantityTypeCode:(long long)arg1 characteristicTypeCode:(long long)arg2 beforeDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_mostRecentQuantityOfType:(id)arg1 beforeDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)postNotificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)postCompanionUserNotificationOfType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_currentWorkoutSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_createFitnessMachineConnection;
-(id)_createFitnessMachineConnectionInitiator;
-(void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_calculateBMRForDate:(id)arg1 useEndOfDay:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)badgeForDomain:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_generateWorkoutMarkerWithCompletion:(/*^block*/id)arg1 ;
-(void)_generatePauseOrResumeRequest:(/*^block*/id)arg1 ;
-(void)_activeWorkoutApplicationIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)_firstPartyWorkoutSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)hasSampleWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchBoolDaemonPreferenceForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_safeFetchDaemonPreferenceForKey:(id)arg1 expectedReturnClass:(Class)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchDaemonPreferenceForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_shouldGenerateDemoDataPreferenceIsSet:(/*^block*/id)arg1 ;
-(void)_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
