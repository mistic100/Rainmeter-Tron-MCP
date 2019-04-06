local max, op, value, previous

function Initialize()
    op = 1
    flip = '0'
    max = SELF:GetNumberOption('MaxValue')
    previous = SELF:GetNumberOption('Value')
    value = previous
end

function Update()
    current = SELF:GetNumberOption('Value')

    if current > previous then
        value = value + op * (current - previous)
    else
        if op == 1 then
            op = -1
            flip = '1'
            value = max - current
        else
            op = 1
            flip = '0'
            value = current
        end
    end

    previous = current

    return value
end