/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject;

@interface SignpostSupportMessageArgument : NSObject {

	unsigned char _type;
	NSObject* _argumentObject;

}

@property (nonatomic,readonly) unsigned char type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSObject * argumentObject;              //@synthesize argumentObject=_argumentObject - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)type;
-(NSObject *)argumentObject;
-(id)initWithArgumentObject:(id)arg1 ;
@end

