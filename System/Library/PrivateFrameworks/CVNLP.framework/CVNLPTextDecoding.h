/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:41:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CVNLPTextDecoding <NSObject>
@required
-(id)decodingResultWithConfiguration:(id)arg1 withContext:(id)arg2;
-(id)greedyDecodingResultWithConfiguration:(id)arg1;
-(id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2;
-(id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2 context:(id)arg3;
-(id)greedyDecodingResult;

@end

