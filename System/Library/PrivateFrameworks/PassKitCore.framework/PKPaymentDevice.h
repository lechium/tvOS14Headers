/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CLLocationManager, NSTimer, NSObject, PKSecureElement, PKPaymentDeviceConfigurationData, NSMutableArray, NSString;

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSTimer* _timer;
	NSObject*<OS_dispatch_source> _locationFixTimeout;
	PKSecureElement* _secureElement;
	PKPaymentDeviceConfigurationData* _configurationData;
	NSMutableArray* _metdataFetchTasks;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _skipLocationCheck;

}

@property (assign,nonatomic) BOOL skipLocationCheck;                //@synthesize skipLocationCheck=_skipLocationCheck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInfoHTTPHeader;
+(id)clientHardwarePlatformInfoHTTPHeader;
-(id)init;
-(void)dealloc;
-(id)configurationData;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithCallbackQueue:(id)arg1 ;
-(void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteApplicationWithAID:(id)arg1 ;
-(id)primarySecureElementIdentifier;
-(void)signatureForAuthToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_populateDeviceMetadata:(id)arg1 withFields:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)skipLocationCheck;
-(void)_finishLocationFixWithLocation:(id)arg1 ;
-(void)_executeDeviceMetadataFetchTasksCompletionHandlers;
-(void)registrationDataWithAuthToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)rewrapDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)trustedDeviceEnrollmentInfo;
-(void)provisioningDataIncludingDeviceMetadata:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentDeviceMetadataFields:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasRegistrationRegionMap;
-(void)setRegistrationRegionMap:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(void)SEPParingInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)queueConnectionToTrustedServiceManagerWithCompletion:(/*^block*/id)arg1 ;
-(void)configurationDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSkipLocationCheck:(BOOL)arg1 ;
@end
