/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBUnknownFields : NSObject {

	char* _buf;
	unsigned long long _bufSpace;
	unsigned long long _bufLen;
	unsigned long long _recursionDepth;

}
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
@end
