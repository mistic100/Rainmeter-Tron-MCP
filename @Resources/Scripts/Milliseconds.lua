local offset, lastSecond

function Initialize()
	offset = os.clock()
	lastSecond = os.time()
end

function Update()
	if lastSecond ~= os.time() then 
		offset = os.clock()
		lastSecond = os.time()
	end

	local _, ms = math.modf(os.clock()-offset)
	return ms * 1000
end
