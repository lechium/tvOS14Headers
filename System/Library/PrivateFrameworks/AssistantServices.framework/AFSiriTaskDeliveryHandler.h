/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriTaskDelivering.h>

@protocol OS_dispatch_queue, AFSiriTaskServiceDelegate;
@class AFSiriTaskService, NSObject, NSString;

@interface AFSiriTaskDeliveryHandler : NSObject <AFSiriTaskDelivering> {

	AFSiriTaskService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	id<AFSiriTaskServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) AFSiriTaskService * service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<AFSiriTaskServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AFSiriTaskServiceDelegate>)delegate;
-(void)setDelegate:(id<AFSiriTaskServiceDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AFSiriTaskService *)service;
-(void)setService:(AFSiriTaskService *)arg1 ;
-(void)deliverSiriTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
