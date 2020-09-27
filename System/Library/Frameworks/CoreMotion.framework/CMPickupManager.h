/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CMPickupDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMPickupManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	Dispatcher* fDispatcher;
	id<CMPickupDelegate> _delegate;

}

@property (assign,nonatomic) id<CMPickupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isPickupAvailable;
-(id)init;
-(void)dealloc;
-(id<CMPickupDelegate>)delegate;
-(void)setDelegate:(id<CMPickupDelegate>)arg1 ;
-(void)onPickupStateUpdated:(const Sample*)arg1 ;
-(void)startPickupUpdates;
-(void)stopPickupUpdates;
@end
