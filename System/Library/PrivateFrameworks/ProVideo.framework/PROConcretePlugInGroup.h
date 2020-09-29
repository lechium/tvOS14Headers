/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:23 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <ProVideo/ProVideo-Structs.h>
@class NSMutableArray, NSString, NSMutableDictionary, NSLock;

@interface PROConcretePlugInGroup : NSObject {

	NSMutableArray* plugIns;
	CFUUIDRef uuidRef;
	NSString* name;
	NSString* displayName;
	NSMutableDictionary* protocols;
	NSLock* mutex;

}
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(id)displayName;
-(CFUUIDRef)uuid;
-(id)uuidString;
-(id)plugInsForProtocols:(id)arg1 ;
-(id)plugIns;
-(void)addPlugIn:(id)arg1 ;
-(BOOL)isEqualToPlugInGroup:(id)arg1 ;
-(id)initWithUUID:(CFUUIDRef)arg1 name:(id)arg2 bundle:(id)arg3 ;
-(void)removePlugIn:(id)arg1 ;
@end

