/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXCMMComposeRecipient, NSString;

@interface PXCMMComposeRecipientValidationQuery : NSObject <NSCopying> {

	PXCMMComposeRecipient* _composeRecipient;
	NSString* _address;
	long long _addressKind;
	long long _validationType;

}

@property (nonatomic,readonly) PXCMMComposeRecipient * composeRecipient;              //@synthesize composeRecipient=_composeRecipient - In the implementation block
@property (nonatomic,copy,readonly) NSString * address;                               //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) long long addressKind;                                 //@synthesize addressKind=_addressKind - In the implementation block
@property (assign,nonatomic) long long validationType;                                //@synthesize validationType=_validationType - In the implementation block
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)address;
-(long long)addressKind;
-(id)initWithComposeRecipient:(id)arg1 address:(id)arg2 addressKind:(long long)arg3 ;
-(PXCMMComposeRecipient *)composeRecipient;
-(long long)validationType;
-(void)setValidationType:(long long)arg1 ;
@end

