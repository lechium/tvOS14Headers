/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSString;

@interface _TVRCMRTextEditingAttributesWrapper : NSObject {

	void* _attributes;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * prompt; 
@property (nonatomic,readonly) MRTextInputTraits traits; 
-(NSString *)title;
-(id)initWithAttributes:(void*)arg1 ;
-(MRTextInputTraits)traits;
-(NSString *)prompt;
@end

