/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKWeakObjectCallbackProxy.h>
#import <libobjc.A.dylib/CKXPCClient.h>

@class NSString;

@interface CKContainerCallbackProxy : CKWeakObjectCallbackProxy <CKXPCClient>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSignificantIssueBehavior:(unsigned long long)arg1 reason:(id)arg2 ;
-(id)initWithContainer:(id)arg1 ;
@end
