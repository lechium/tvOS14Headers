//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCDServiceInterface-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSOperationQueue, NSString, NSXPCConnection;

@interface CCDServicerServer : NSObject <CCDServiceInterface, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSXPCConnection *_remoteProcessConnection;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000957c
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSXPCConnection *remoteProcessConnection; // @synthesize remoteProcessConnection=_remoteProcessConnection;
- (id)_operationForEnrollmentRequest:(id)arg1;	// IMP=0x00000001000094b0
- (void)_addOperationToQueue:(id)arg1;	// IMP=0x00000001000093b8
- (void)_startProcessForEnrollmentRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009170
- (id)_operationForDeviceUploadRequest:(id)arg1;	// IMP=0x00000001000090c4
- (id)_requestForDeviceUploadRequestType:(long long)arg1 userCredentials:(id)arg2;	// IMP=0x0000000100009020
- (void)_startProcessForDeviceUploadRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008ecc
- (void)submitDeviceUploadRequest:(id)arg1 credentials:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008e04
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(id)arg1 credentials:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008d3c
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008ca8
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008c14
- (void)unenrollWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008bac
- (void)fetchConfigurationWithoutValidationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008b44
- (void)fetchConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008adc
- (void)provisionallyEnrollWithNonce:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008a4c
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000100008980

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

