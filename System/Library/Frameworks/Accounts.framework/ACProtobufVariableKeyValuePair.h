/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ACProtobufVariableValue;

@interface ACProtobufVariableKeyValuePair : PBCodable <NSCopying> {

	NSString* _key;
	ACProtobufVariableValue* _value;

}

@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) ACProtobufVariableValue * value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(ACProtobufVariableValue *)value;
-(void)setValue:(ACProtobufVariableValue *)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithObjectValue:(id)arg1 forKey:(id)arg2 ;
@end

